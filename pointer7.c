#include <stdio.h>
int main() {
    int vint = 650;
    int *pint;
    pint = &vint;

    printf("Vint = %p\nPint = %p, %d", &vint, pint, *pint);
    do {
        getchar();
    } while (getchar() != '\n');
    return 0;
}
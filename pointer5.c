#include <stdio.h>
int main() {
    int a = 4, d = 7;
    float b = 5.5, c = 7.75;
    printf("a = %d, %p\n", a, a);
    printf("b = %.2f, %p\n", b, b);
    printf("c = %.2f, %p\n", c, c);
    do {
        getchar();
    } while (getchar() != '\n');
    return 0;
}
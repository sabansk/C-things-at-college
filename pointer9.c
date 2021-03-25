#include <stdio.h>
int main() {
    int var = 20;
    int *ptr1; 
    int **ptr2;
    ptr1 = &var;
    ptr2 = &ptr1;
    printf("var = %d\n*ptr1 = %d\n**ptr2 = %d\n", var, *ptr1, **ptr2);
    do {
        getchar();
    } while (getchar() != '\n');
    return 0;
}
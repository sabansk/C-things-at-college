#include <stdio.h>
int main() {
    int u1, u2, v = 3;
    int *pv;

    u1 = 2 * (v+5);
    pv=&v;
    u2 = 2 * (*pv+5);

    printf("\nu1=%d u2=%d", u1, u2);
}
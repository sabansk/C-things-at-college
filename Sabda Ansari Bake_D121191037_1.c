#include <stdio.h>
int main() {
    int u = 3, v;
    int *pu;
    int *pv;

    pu = &u;
    v = *pu;
    pv = &v;

    printf("\nu=%d  &u=%X   pu=%X   *pu=%d", u, &u, pu, *pu);
    printf("\n\nv=%d    &v=%X   pv=%X   *pu=%d", v, &v, pv, *pv);
}
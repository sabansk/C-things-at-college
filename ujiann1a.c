#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, n, ganjil= 0, total = 0;
    printf("Masukkan banyak bilangan : ");
    scanf("%d", &n);

    while (i < n)
    {
        ganjil++;
        if (ganjil%2==1 && i<(n-1))
        {
            printf("%d ", ganjil);
            total = total+ganjil;
            i++;
        }
        else if (ganjil%2==1)
        {
            printf("%d ", ganjil);
            total = total + ganjil;
            i++;
        }
    }
    printf("\nHasil penghitungan :\nTotal %d bilangan ganjil pertama = %d", n, total);
    getchar();
    return 0;
}
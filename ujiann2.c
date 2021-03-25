#include <stdio.h>
int main() {
    int n, angka[9];

    printf("Masukkan angka pertama : ");
    scanf("%d", &angka[1]);

    printf("Masukkan angka kedua : ");
    scanf("%d", &angka[2]);

    printf("Masukkan angka ketiga : ");
    scanf("%d", &angka[3]);

    printf("Masukkan angka keempat : ");
    scanf("%d", &angka[4]);

    for (n = 4; n <= 9; n++)
    {
        angka[n] = angka[n-4] + angka[n-3] + angka[n-2] + angka[n-1];
        printf("\t%d + %d + %d + %d = %d\n", angka[n-4], angka[n-3], angka[n-2], angka[n-1], angka[n]);
    }
    do
    {
        getchar();
    } while (getchar()!='\n');
    return 0;
}
#include <stdio.h>
int main() {

    int banyak;
    int buah;
    float harga;

    printf("Masukkan jenis buah \n");
    printf("1. Mangga\n2. Durian\n3. Jeruk\n");
    scanf("%d", &buah);

    if (buah==1)
    {
        printf("Masukkan jumlah buah mangga yang diinginkan ");
        scanf("%d", &banyak);
        harga=banyak*25000;
        printf("Harganya adalah Rp %.2f\n", harga);
        printf("Terima kasih :)");
        getchar();
    }
    else if (buah==2)
    {
        printf("Masukkan jumlah buah durian yang diinginkan ");
        scanf("%d", &banyak);
        harga=banyak*30000;
        printf("Harganya adalah Rp %.2f\n", harga);
        printf("Terima kasih :)");
        getchar();
    }
    else if (buah==3)
    {
        printf("Masukkan jumlah buah jeruk yang diinginkan ");
        scanf("%d", &banyak);
        harga=banyak*15000;
        printf("Harganya adalah Rp %.2f\n", harga);
        printf("Terima kasih :)");
        getchar();
    }
    else
    {
        printf("");
    }
    getchar();

    return 0;
}
#include <stdio.h>
int main() {
    int harga, liter, satuan=6450, i;
    printf("Masukkan jumlah liter yang diinginkan : ");
    scanf("%d", &liter);
    printf("liter\tharga");
    for (i = 0; i < liter; i++)
    {
        harga = (i+1) * satuan;
        printf("\n%d\t%d", i+1, harga);
    }
    
    do {
        getchar();
    } while (getchar() != '\n');
    return 0;
}
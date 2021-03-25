#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char buah[100], jawaban, tombol;
    float jumlah, hasil, total;
    int mangga = 20000, durian = 40000, apel = 35000, anggur = 37500;

    FILE *buatfile;
    buatfile=fopen("Rincian_Pembelian.txt", "w");
    printf("\n");
    printf("Inputan Buah\n");
    do
    {
        printf("Masukkan nama buah: "); scanf("%s", &buah);
        if (strcmp(buah, "mangga")==0)
        {
            printf("Jumlah kg : "); scanf("%f", &jumlah);
            fprintf(buatfile, "\n mangga\t");
            fprintf(buatfile, "%.1f kg", jumlah);
            hasil = jumlah * mangga;
            fprintf(buatfile, " * Rp 20.000 = Rp.%.3f", hasil);
        }
        else if (strcmp(buah, "durian")==0)
        {
            printf("Jumlah kg : "); scanf("%f", &jumlah);
            fprintf(buatfile, "\n durian\t");
            fprintf(buatfile, "%.1f kg", jumlah);
            hasil = jumlah * durian;
            fprintf(buatfile, " * Rp 40.000 = Rp.%.3f", hasil);
        }
        else if (strcmp(buah, "apel")==0)
        {
            printf("Jumlah kg : "); scanf("%f", &jumlah);
            fprintf(buatfile, "\n apel\t");
            fprintf(buatfile, "%.1f kg", jumlah);
            hasil = jumlah * apel;
            fprintf(buatfile, " * Rp 35.000 = Rp.%.3f", hasil);
        }
        else if (strcmp(buah, "anggur")==0)
        {
            printf("Jumlah kg : "); scanf("%f", &jumlah);
            fprintf(buatfile, "\n anggur\t");
            fprintf(buatfile, "%.1f kg", jumlah);
            hasil = jumlah * anggur;
            fprintf(buatfile, " * Rp 37.500 = Rp.%.3f", hasil);
        }
        else
        {
            printf("Salah input gan..");
        }

        while (!(tombol == 'Y' || tombol == 'N'))
        {
            printf("\nIngin Tambah?");
            tombol = toupper(getchar());
            fflush(stdin);
        }
        total += hasil;
    } while (tombol == 'Y');

    fprintf(buatfile, "\n\t\t\tTotal %.3f", total);
    return 0;
}
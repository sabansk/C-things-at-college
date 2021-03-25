#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct {
    int jam, menit, detik;
}time;

int cariselisih(time jam1, time jam2);
time konversijam(int durasi);

int cariselisih(time jam1, time jam2) {
    int detik1, detik2, durasi;

    detik1 = (jam1.jam * 3600) + (jam1.menit * 60) + jam1.detik;
    detik2 = (jam2.jam * 3600) + (jam2.menit * 60) + jam2.detik;

    durasi = detik2 - detik1;
    return durasi;
}

time konversijam(int durasi) {
    time jamdurasi;

    jamdurasi.jam = durasi/3600;
    jamdurasi.menit = (durasi % 3600) / 60;
    jamdurasi.detik = durasi % 60;

    return jamdurasi;
}

int main() {
    int durasi;
    time jam1, jam2, jamdurasi;

    printf("Masukkan waktu awal (Format 24 Jam)\n");
    printf("Jam : ");
    scanf("%d", &jam1.jam);
    printf("Menit : ");
    scanf("%d", &jam1.menit);
    printf("Detik : ");
    scanf("%d", &jam1.detik);
    printf("\nMasukkan waktu akhir\n");
    printf("Jam : ");
    scanf("%d", &jam2.jam);
    printf("Menit : ");
    scanf("%d", &jam2.menit);
    printf("Detik : ");
    scanf("%d", &jam2.detik);

    durasi = cariselisih(jam1, jam2);
    jamdurasi = konversijam(durasi);

    printf("Selisih Waktu adalah --> %d : %d : %d", jamdurasi.jam, jamdurasi.menit, jamdurasi.detik);
   do {
       getchar();
   } while (getchar() != '\n');
    return 0;
}
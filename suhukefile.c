#include <stdio.h>
int main() {
    int i;
    float fah, rea;
    FILE *out=fopen("suhu.txt", "w");
    
    printf("Ini latihan baca tulis ke file dengan bahasa C\n");
    fprintf(out, "Ini Latihan Baca Tulis ke File");
    fprintf(out, "\nCelcius\tFahrenheit\tReamur");
    for (i = 1; i < 21; i++)
    {
        
        fah=(i*9/5)+32;
        rea=i*4/5;
        fprintf(out, "\n%d \t %.2f\t\t%.2f\n", i, fah, rea);
    }
    fprintf(out, "\n\nProgram konversi temperatur");
    fclose(out);
    printf("\n\nProgram konversi temperatur");

    return 0;
}
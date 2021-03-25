#include <stdio.h>
int main() {
    int c;
    float f, reamur;
    FILE *in=fopen("suhu.txt", "r");
    while(!feof(in)){
        fscanf(in, "%d %.2f %.2f", c, f, reamur);
        printf("Reamur\tF\tC");
        printf("%.2f\t%.2f\t%.2f", reamur, f, c);
        
    }
    fclose(in);
    getchar();
    return 0;
}
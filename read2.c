#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    float fahr, reamur ;
    char cel[65];
    int line =0;
    FILE *fp; 

    fp=fopen("data.txt", "r");

    fseek(fp, 32, SEEK_SET); // tanyakan fungsinya ini ke fadil!
    fflush(fp); // ini juga!
    while(fgets(cel, 30, fp) && line <=20) // INI JUGA
    {
    printf("%s", cel);
    line++;                     // AH SEKALIAN TANYA SEMUA DAH!
    
    }
    fclose(fp);
    getchar();
    return 0;
}
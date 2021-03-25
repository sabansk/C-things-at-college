#include <stdio.h>

int main() {
    int i,n,p,total,prima;
    printf("Masukkan banyak bilangan : ");
    scanf("%d", &n);

    if(n>1)
       {
           for(i=2; i<=n; i++)
              {
                  for(p=1; p<=i; p++)
                  {
                    if(i%p == 0)
                    printf("%d ", i);
                    prima++; 
                    total = prima;
                  }
              }
               
       }
       


    printf("\nHasil penghitungan :\nTotal %d bilangan prima pertama = %d", n, total);



    return 0;
}
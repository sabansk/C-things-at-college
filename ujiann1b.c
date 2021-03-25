#include <stdio.h>
#include <conio.h>
int main() {
    int i, n, sum;

    printf("Masukkan bilangan prima : ");
    scanf("%d", &n);
    
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum++;
        }
        
        printf("%d", sum);   
    }
    
    return 0;
}
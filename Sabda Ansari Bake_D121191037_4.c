#include <stdio.h>
long int factorial(int n);
int main() {
    int n;
    long int factorial(int n);

    printf("n = ");
    scanf("%d", &n);

    printf("n! = %ld\n", factorial(n));
}

long int factorial(int n) {
    if (n <= 1)
    {
        return(1);
    }
    else
    {
        return(n * factorial(n - 1));
    }
}
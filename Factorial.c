#include<stdio.h>

int main() {
    int fact = 1;
    int i, n;

    printf("\nEnter the Value for N: ");
    scanf("%d", &n);

    i = n;

    while (i >= 2)
    {
        //fact = fact * i;  
        fact *= i;
        i--;
    }
    
    printf("\nFactorial of %d is %d.", n, fact);
    return 0;
}
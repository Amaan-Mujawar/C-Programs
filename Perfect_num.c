#include<stdio.h>

int main() {
    int sum = 0;
    int i, n;

    printf("\nEnter the number for N: ");
    scanf("%d", &n);

    i = 1;

    while (i <= n/2)
    {
        if (n % i == 0)
        {
            sum += 1;
        }
        i++;
    }
    if (sum == n)
    {
        printf("\n%d is perfect number.", sum);
    }
    else
    {
        printf("\nNot a perfect number.");
    }
    
}
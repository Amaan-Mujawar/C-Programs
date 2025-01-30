#include<stdio.h>

int main() {
    int n, i;

    printf("\nEnter the Number of N: ");
    scanf("%d", &n);

    i = 1;

    while (i <= n) {
        if (n % i == 0)
        {
            printf("%d is the factor.\n", i);
        }
        i++;
    }
    return 0;
}
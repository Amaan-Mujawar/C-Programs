#include<stdio.h>

int main() {
    int sum = 0;
    int i, n;

    printf("\nEnter the number for N: ");
    scanf("%d", &n);

    i = 1;

    while(i <= n) {
        if (n % i == 0)
        {
            sum += i;
        }
        i++;
    }

    printf("\nSum of Factors is %d.", sum);
    return 0;
}
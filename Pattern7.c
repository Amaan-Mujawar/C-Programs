#include<stdio.h>

int main() {
    int i, j, n;

    i = n;

    printf("Enter the value for n: ");
    scanf("%d", &n);

    for ( i = 0; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
            printf(" %d ", i);
        printf(" # \n");
    }
    return 0;
}
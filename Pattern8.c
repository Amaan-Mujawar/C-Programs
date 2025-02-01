#include<stdio.h>

int main() {
    int i, j, n;

    i = n;

    printf("Enter the value for n: ");
    scanf("%d", &n);

    for ( i = 0; i <= n; i++)
    {
        for ( j = i; j >= 1; j--)
            printf(" %d ", j);
        printf("\n");
    }
    return 0;
}
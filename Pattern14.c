#include<stdio.h>

int main() {
    int i, j, n;

    i = n;

    printf("Enter the value for n: ");
    scanf("%d", &n);

    for ( i = n; i >= 1; i--)
    {
        for ( j = 1; j <= i; j++)
            printf(" %d ", j);
        
        printf("\n");
    }
    return 0;
}
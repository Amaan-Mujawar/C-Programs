#include <stdio.h>

int main()
{
    int i, j, n;
    i = n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf(" * ");
        for (j = 1; j <= i - 1; j++)
            printf(" %d ", j);
        printf("\n");
    }
    return 0;
}
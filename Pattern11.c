#include<stdio.h>

int main() {
    int i, j, k, cnt, n;

    i = n;
    cnt = 1;

    printf("Enter the value for n: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        for ( k = 1; k <= n-i; k++)
            printf("   ");

        for ( j = 1; j <= i; j++){
            printf(" %d ", cnt);
            cnt++;
        }
            
        printf("\n");
    }
    return 0;
}
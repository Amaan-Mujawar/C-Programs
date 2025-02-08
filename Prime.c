#include<stdio.h>

int isPrime(int n) {
    int cnt = 0;
    int i;

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            cnt++;
    }
    // if (cnt == 2)
    //      return 1;
    // else
    //      return 0;
    return (cnt == 2);
}

int main() {
    int n, i, pn = 0;
    int a[100], prime[100];

    printf("\nEnter a N: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        if(isPrime(a[i]))
        {
            prime[pn] = a[i];
            pn++;
        }
    }

    if (pn > 0)
    {
        printf("The prime numbers are : \n");
        for ( i = 0; i < pn; i++)
        {
            printf("%d\n", prime[i]);
        }
        
    }else
    {
        printf("No prime number found!!!");
    }
    
    
    return 0;
}
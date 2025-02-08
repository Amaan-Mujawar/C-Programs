#include <stdio.h>

int main()
{
    int num;

    printf("Enter the value: ");
    scanf("%d", &num);

    if ((num % 3 == 0) && (num % 5 == 0))
    {
        printf("%d is divisible by 3 and 5.", num);
    }

    else if (num % 3 == 0)
    {
        printf("%d is divisible by 3 only.", num);
    }

    else if (num % 5 == 0)
    {
        printf("%d is divisible by 5 only.", num);
    }

    else
    {
        printf("%d is not divisible by 3 and 5.", num);
    }
    
    return 0;
}
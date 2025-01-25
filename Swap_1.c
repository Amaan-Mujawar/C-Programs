//Enter any two numbers and swap numbers without third number
//n1=10 and n2=20

#include<stdio.h>

int main() { 
    int a, b;

    printf("\nEnter the first number: ");
    scanf("%d", &a);

    printf("\nEnter the second number: ");
    scanf("%d", &b);

    printf("\nBefore Swapping: 1st num = %d, 2nd num = %d. \n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping: 1st num = %d, 2nd num = %d. \n\n", a, b);
    return 0;
}
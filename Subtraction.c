#include<stdio.h>

int main() {
    int num1, num2, sub;

    printf("\nEnter the two numbers: ");
    scanf("%d%d", &num1, &num2);

    sub = num1 - num2;

    printf("\nThe Subtraction of %d and %d is: %d. \n", num1, num2, sub);
    return 0;
}
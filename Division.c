#include<stdio.h>

int main() {
    double a, b, c;

    printf("\nEnter the value for a: ");
    scanf("%lf", &a);

    printf("\nEnter the value for b: ");
    scanf("%lf", &b);

    c = a/b;

    printf("\nThe division of %lf and %lf is %lf. \n", a, b, c);
    return 0;
}
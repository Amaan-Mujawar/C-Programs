//Enter base, height and print area of triangle
// area = 0.5*base*height 

#include<stdio.h>

int main() {
    float base, height, area;

    printf("\nEnter the value for base of the triangle: ");
    scanf("%f", &base);

    printf("\nEnter the value for height of the tringle: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("\nThe area for the triangle with base = %.2f and height = %.2f is %.2f. \n\n", base, height, area);
    return 0;
}
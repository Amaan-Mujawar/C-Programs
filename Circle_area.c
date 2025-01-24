#include<stdio.h>

int main() {
    float radius, area;

    printf("\nEnter radius for circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    
    printf("\nArea of Circle is : %.2f. \n", area);
    return 0;
}
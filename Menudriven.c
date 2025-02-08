#include<stdio.h>

int main(){
    int ch1, ch2;
    float radius, circlearea, base, height, trianglearea, rectanglearea;

    menu:
    printf("\n1. Area of Circle. \n2. Area of Triangle. \n3. Area of Rectangle.");
    printf("\nEnter your choice: ");
    scanf("%d", &ch1);

    if (ch1 == 1) {
        printf("\nEnter radius of Circle: ");
        scanf("%f", &radius);
        circlearea = 3.14 * radius * radius;
        printf("\nArea of Circle is: %f.", circlearea);
    }
    else if (ch1 == 2) {
        printf("\nEnter the base of the Triangle: ");
        scanf("%f", &base);
        printf("\nEnter the height of the Triangle: ");
        scanf("%f", &height);
        trianglearea = 0.5 * base * height;
        printf("\nArea of Rectangle is: %f.", trianglearea);
    }
    else if (ch1 == 3) {
        printf("\nEnter the base of the Rectangle: ");
        scanf("%f", &base);
        printf("\nEnter the height of the Rectangle: ");
        scanf("%f", &height);
        rectanglearea = base * height;
        printf("\nArea of Rectangle is: %f.", rectanglearea);
    }
    else {
        printf("\nInvalid choice.");
    }
    printf("\nDo you want to continue?(press 1): ");
    scanf("%d", &ch2);
    if (ch2 == 1) {
        goto menu;
    }
    printf("\n----------THANK YOU----------");
}
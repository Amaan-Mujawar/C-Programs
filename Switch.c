#include<stdio.h>

int main() {
    int ch, c;
    int num1, num2, add, sub, mul, rem;
    float div;

    menu:

    printf("\nEnter any 2 numbers: ");
    scanf("%d%d", &num1, &num2);

    printf("\n1. Addition. \n2. Subtraction. \n3. Multiplication. \n4. Division. \n5. Reminder.");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    
    switch (ch)
    {
        case 1:
        add = num1 + num2;
        printf("\nAddition of %d and %d is %d.", num1, num2, add);
        break;

        case 2:
        sub = num1 - num2;
        printf("\nSubtraction of %d and %d is %d.", num1, num2, sub);
        break;

        case 3:
        mul = num1 * num2;
        printf("\nMultiplication of %d and %d is %d.", num1, num2, mul);
        break;

        case 4:
        div = (float)num1 / (float)num2;
        printf("\nDivision of %d and %d is %f.", num1, num2, div);
        break;

        case 5:
        rem = num1 % num2;
        printf("\nReminder of %d and %d is %d.", num1, num2, rem);
        break;

        default:
        printf("Invalid Case!!!");
    }

    printf("\nDo you want to continue with Caculator(Press 1): ");
    scanf("%d", &c);
    if (c == 1)
    {
        goto menu;
    }
    printf("\nThank you!!!");
}
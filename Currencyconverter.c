#include<stdio.h>

int main() {
    int ch1, ch2, ch3, ch4;
    float input, result;

    menu:

    printf("\n-----CURRENCY CONVERTER-----");
    printf("\n1. Rupee. \n2. Dollar. \n3. Euro.");
    printf("\nEnter your choice: ");
    scanf("%d", &ch1);

    if (ch1 == 1) {
        rupee:

        printf("\nEnter the amount of rupee: ");
        scanf("%f", &input);

        printf("\n1. Rupee. \n2. Dollar. \n3. Euro.");
        printf("\nEnter yout choice to convert your currency into: ");
        scanf("%d", &ch2);
        
        if (ch2 == 1) {
            result = input;
            printf("%f rupees = %f rupees.", input, result);
        }
        else if (ch2 == 2) {
            result = input/85.91;
            printf("%f rupees = %f Dollar.", input, result);
        }
        else if (ch2 == 3) {
            result = input/88.50;
            printf("%f rupees = %f Euro.", input, result);
        }
        else {
            printf("\nINVALID CHOICE!!!!!");
        }

        printf("\nDo you want to continue with rupee?(press 1): ");
        scanf("%d", &ch4);
        if (ch4 == 1) {
        goto rupee;
        }
        else {
            printf("\nTHANK YOU!!!");
        }
    }
    else if (ch1 == 2) {
        dollar:

        printf("\nEnter the amount of Dollar: ");
        scanf("%f", &input);

        printf("\n1. Rupee. \n2. Dollar. \n3. Euro.");
        printf("\nEnter yout choice to convert your currency into: ");
        scanf("%d", &ch2);
        
        if (ch2 == 1) {
            result = input * 85.91;
            printf("%f Dollar = %f rupees.", input, result);
        }
        else if (ch2 == 2) {
            result = input;
            printf("%f Dollar = %f Dollar.", input, result);
        }
        else if (ch2 == 3) {
            result = input/1.03;
            printf("%f Dollar = %f Euro.", input, result);
        }
        else {
            printf("\nINVALID CHOICE!!!!!");
        }

        printf("\nDo you want to continue with Dollar?(press 1): ");
        scanf("%d", &ch4);
        if (ch4 == 1) {
        goto dollar;
        }
        else {
            printf("\nTHANK YOU!!!");
        }
    }
    else if (ch1 == 3) {
        euro:

        printf("\nEnter the amount of Euro: ");
        scanf("%f", &input);

        printf("\n1. Rupee. \n2. Dollar. \n3. Euro.");
        printf("\nEnter yout choice to convert your currency into: ");
        scanf("%d", &ch2);
        
        if (ch2 == 1) {
            result = input * 88.50;
            printf("%f Euro = %f rupees.", input, result);
        }
        else if (ch2 == 2) {
            result = input * 1.03;
            printf("%f Euro = %f Dollar.", input, result);
        }
        else if (ch2 == 3) {
            result = input;
            printf("%f Euro = %f Euro.", input, result);
        }
        else {
            printf("\nINVALID CHOICE!!!!!");
        }

        printf("\nDo you want to continue with Euro?(press 1): ");
        scanf("%d", &ch4);
        if (ch4 == 1) {
        goto euro;
        }
        else {
            printf("\nTHANK YOU!!!");
        }
    }
    else {
        printf("\nINVALID CHOICE!!!!!");
    }
    printf("\nDo you want to continue with Currency Converter?(press 1): ");
    scanf("%d", &ch3);
    if (ch3 == 1) {
        goto menu;
    }
    printf("\n----------THANK YOU----------");
}
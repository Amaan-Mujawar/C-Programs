#include <stdio.h>

int main()
{
    int c, ch1, ch2, ch3;
    int total = 0;
    float cgst, sgst, finaltotal;
    int cnt = 0;

menu:

    printf("\n\t-------Hotel Menu-------");
    printf("\n1. Starter. \n2. Main Course. \n3. Sweets.");
    printf("\nEnter your choice: ");
    scanf("%d", &ch1);

    if (ch1 == 1)
    {
    starter:

        printf("\n\t-------Starter-------");
        printf("\n1. Chicken Chilly \t:\t 175 \n2.Chicken 65 \t\t:\t 150 \n3.Chicken Lollypop \t:\t 200 ");
        printf("\nEnter your choice: ");
        scanf("%d", &ch2);

        if (ch2 == 1)
        {
            cnt++;
            total = total + 175;
            printf("%d order is confirmed.", cnt);
        }
        else if (ch2 == 2)
        {
            cnt++;
            total = total + 150;
            printf("%d order is confirmed.", cnt);
        }
        else if (ch2 == 3)
        {
            cnt++;
            total = total + 200;
            printf("%d order is confirmed.", cnt);
        }
        else
        {
            printf("\nInvalid Choice!!!");
        }

        printf("\nDo you want to continue with starter(Press 1): ");
        scanf("%d", &c);
        if (c == 1)
        {
            goto starter;
        }
    }
    else if (ch1 == 2)
    {
    maincourse:

        printf("\n\t-------Main Course-------");
        printf("\n1. Chicken Handi \t:\t 325 \n2. murgh musallam \t:\t 800 \n3. Biryani \t:\t 400 \n4. Roti \t:\t 25 ");
        printf("\nEnter your choice: ");
        scanf("%d", &ch2);

        if (ch2 == 1)
        {
            cnt++;
            total = total + 325;
            printf("%d order is confirmed.", cnt);
        }
        else if (ch2 == 2)
        {
            cnt++;
            total = total + 800;
            printf("%d order is confirmed.", cnt);
        }
        else if (ch2 == 3)
        {
            cnt++;
            total = total + 400;
            printf("%d order is confirmed.", cnt);
        }
        else if (ch2 == 4)
        {
            cnt++;
            total = total + 25;
            printf("%d order is confirmed.", cnt);
        }
        else
        {
            printf("\nInvalid Choice!!!");
        }

        printf("\nDo you want to continue with Main Course(Press 1): ");
        scanf("%d", &c);
        if (c == 1)
        {
            goto maincourse;
        }
    }
    else if (ch1 == 3)
    {
    sweet:

        printf("\n\t-------Sweets-------");
        printf("\n1. Ice cream \t:\t 75 \n2. Gullab Jamun \t:\t 50 \n3. Rasmalai \t:\t 100 ");
        printf("\nEnter your choice: ");
        scanf("%d", &ch2);

        if (ch2 == 1)
        {
            cnt++;
            total = total + 75;
            printf("%d order is confirmed.", cnt);
        }
        else if (ch2 == 2)
        {
            cnt++;
            total = total + 50;
            printf("%d order is confirmed.", cnt);
        }
        else if (ch2 == 3)
        {
            cnt++;
            total = total + 100;
            printf("%d order is confirmed.", cnt);
        }
        else
        {
            printf("\nInvalid Choice!!!");
        }

        printf("\nDo you want to continue with Sweets(Press 1): ");
        scanf("%d", &c);
        if (c == 1)
        {
            goto sweet;
        }
    }
    else
    {
        printf("\nInvalid Choice!!!");
    }

    printf("\nDo you want to continue with Menu(Press 1): ");
    scanf("%d", &ch3);
    if (ch3 == 1)
    {
        goto menu;
    }

    if (cnt > 0)
    {
        cgst = total * 0.06;
        cgst = total * 0.06;
        finaltotal = total + cgst + sgst;

        printf("\n\t---------------BILL---------------");
        printf("\n\t\tTotal \t\t:\t %d", total);
        printf("\n\t\tCGST \t\t:\t %f", cgst);
        printf("\n\t\tSGST \t\t:\t %f", sgst);
        printf("\n\t\tFinal Total \t:\t %f", total);
    }
    else
    {
        printf("No order found.");
    }
    printf("\n\t-------Thank you-------");
}
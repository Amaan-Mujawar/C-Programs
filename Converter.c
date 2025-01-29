#include <stdio.h>

int main()
{
    int ch1, ch2, ch3, ch4, ch5, ch6;
    float input, result;

menu:

    printf("\n-------Converter-------");
    printf("\n1. Currency Converter. \n2. Temperature. \n3. Time.");
    printf("\nEnter Your Choice: ");
    scanf("%d", &ch1);

    if (ch1 == 1)
    {
    currencyconverter:

        printf("\n-------CURRENCY CONVERTER-------");
        printf("\n1. Rupee. \n2. Dollar. \n3. Euro.");
        printf("\nEnter your choice: ");
        scanf("%d", &ch2);

        if (ch2 == 1)
        {
        rupee:

            printf("\nEnter the amount of rupee: ");
            scanf("%f", &input);

            printf("\n1. Rupee. \n2. Dollar. \n3. Euro.");
            printf("\nEnter yout choice to convert your currency into: ");
            scanf("%d", &ch3);

            if (ch3 == 1)
            {
                result = input;
                printf("%f rupees = %f rupees.", input, result);
            }
            else if (ch3 == 2)
            {
                result = input / 85.91;
                printf("%f rupees = %f Dollar.", input, result);
            }
            else if (ch3 == 3)
            {
                result = input / 88.50;
                printf("%f rupees = %f Euro.", input, result);
            }
            else
            {
                printf("\nINVALID CHOICE!!!!!");
            }

            printf("\nDo you want to continue with rupee?(press 1): ");
            scanf("%d", &ch4);
            if (ch4 == 1)
            {
                goto rupee;
            }
            else
            {
                printf("\nTHANK YOU!!!");
            }
        }
        else if (ch2 == 2)
        {
        dollar:

            printf("\nEnter the amount of Dollar: ");
            scanf("%f", &input);

            printf("\n1. Rupee. \n2. Dollar. \n3. Euro.");
            printf("\nEnter yout choice to convert your currency into: ");
            scanf("%d", &ch3);

            if (ch3 == 1)
            {
                result = input * 85.91;
                printf("%f Dollar = %f rupees.", input, result);
            }
            else if (ch3 == 2)
            {
                result = input;
                printf("%f Dollar = %f Dollar.", input, result);
            }
            else if (ch3 == 3)
            {
                result = input / 1.03;
                printf("%f Dollar = %f Euro.", input, result);
            }
            else
            {
                printf("\nINVALID CHOICE!!!!!");
            }

            printf("\nDo you want to continue with Dollar?(press 1): ");
            scanf("%d", &ch4);
            if (ch4 == 1)
            {
                goto dollar;
            }
            else
            {
                printf("\nTHANK YOU!!!");
            }
        }
        else if (ch2 == 3)
        {
        euro:

            printf("\nEnter the amount of Euro: ");
            scanf("%f", &input);

            printf("\n1. Rupee. \n2. Dollar. \n3. Euro.");
            printf("\nEnter yout choice to convert your currency into: ");
            scanf("%d", &ch3);

            if (ch3 == 1)
            {
                result = input * 88.50;
                printf("%f Euro = %f rupees.", input, result);
            }
            else if (ch3 == 2)
            {
                result = input * 1.03;
                printf("%f Euro = %f Dollar.", input, result);
            }
            else if (ch3 == 3)
            {
                result = input;
                printf("%f Euro = %f Euro.", input, result);
            }
            else
            {
                printf("\nINVALID CHOICE!!!!!");
            }

            printf("\nDo you want to continue with Euro?(press 1): ");
            scanf("%d", &ch4);
            if (ch4 == 1)
            {
                goto euro;
            }
            else
            {
                printf("\nTHANK YOU!!!");
            }
        }
        else
        {
            printf("\nINVALID CHOICE!!!!!");
        }

        printf("\nDo you want to continue with Currency Converter?(press 1): ");
        scanf("%d", &ch5);
        if (ch5 == 1)
        {
            goto currencyconverter;
        }
        printf("\n----------THANK YOU----------");
    }
    else if (ch1 == 2)
    {
    Temperature:

        printf("\n-------Temperature CONVERTER-------");
        printf("\n1. Celsius. \n2. Kelvin. \n3. Fahrenheit.");
        printf("\nEnter your choice: ");
        scanf("%d", &ch2);

        if (ch2 == 1)
        {
        celsius:

            printf("\nEnter the Temperature in Celsius: ");
            scanf("%f", &input);

            printf("\n1. Celsius. \n2. Kelvin. \n3. Fahrenheit.");
            printf("\nEnter yout choice to convert your Temperature into: ");
            scanf("%d", &ch3);

            if (ch3 == 1)
            {
                result = input;
                printf("%f Celsius = %f Celsius.", input, result);
            }
            else if (ch3 == 2)
            {
                result = input + 273.15;
                printf("%f Celsius = %f Kelvin.", input, result);
            }
            else if (ch3 == 3)
            {
                result = (9 / 5) * input + 32;
                printf("%f Celsius = %f Fahrenheit.", input, result);
            }
            else
            {
                printf("\nINVALID CHOICE!!!!!");
            }

            printf("\nDo you want to continue with Celsius?(press 1): ");
            scanf("%d", &ch4);
            if (ch4 == 1)
            {
                goto celsius;
            }
            else
            {
                printf("\nTHANK YOU!!!");
            }
        }
        else if (ch2 == 2)
        {
        Kelvin:

            printf("\nEnter the Temperature in Kelvin: ");
            scanf("%f", &input);

            printf("\n1. Celsius. \n2. Kelvin. \n3. Fahrenheit.");
            printf("\nEnter yout choice to convert your Temperature into: ");
            scanf("%d", &ch3);

            if (ch3 == 1)
            {
                result = input - 273.15;
                printf("%f Kelvin = %f Celsius.", input, result);
            }
            else if (ch3 == 2)
            {
                result = input;
                printf("%f Kelvin = %f Kelvin.", input, result);
            }
            else if (ch3 == 3)
            {
                result = (input - 273.15) * (9 / 5) + 32;
                printf("%f Kelvin = %f Fahrenheit.", input, result);
            }
            else
            {
                printf("\nINVALID CHOICE!!!!!");
            }

            printf("\nDo you want to continue with Kelvin?(press 1): ");
            scanf("%d", &ch4);
            if (ch4 == 1)
            {
                goto Kelvin;
            }
            else
            {
                printf("\nTHANK YOU!!!");
            }
        }
        else if (ch2 == 3)
        {
        Fahrenheit:

            printf("\nEnter the Temperature in Fahrenheit: ");
            scanf("%f", &input);

            printf("\n1. Celsius. \n2. Kelvin. \n3. Fahrenheit.");
            printf("\nEnter yout choice to convert your Temperature into: ");
            scanf("%d", &ch3);

            if (ch3 == 1)
            {
                result = (input - 32) * (5 / 9);
                printf("%f Fahrenheit = %f Celsius.", input, result);
            }
            else if (ch3 == 2)
            {
                result = (input - 32) * (5 / 9) + 273.15;
                printf("%fFahrenheit = %f Kelvin.", input, result);
            }
            else if (ch3 == 3)
            {
                result = input;
                printf("%f Fahrenheit = %f Fahrenheit.", input, result);
            }
            else
            {
                printf("\nINVALID CHOICE!!!!!");
            }

            printf("\nDo you want to continue with Fahrenheit?(press 1): ");
            scanf("%d", &ch4);
            if (ch4 == 1)
            {
                goto Fahrenheit;
            }
            else
            {
                printf("\nTHANK YOU!!!");
            }
        }
        else
        {
            printf("\nINVALID CHOICE!!!!!");
        }
        printf("\nDo you want to continue with calculator?(press 1): ");
        scanf("%d", &ch5);
        if (ch5 == 1)
        {
            goto Temperature;
        }
        printf("\n----------THANK YOU----------");
    }
    else if (ch1 == 3)
    {
    Time:

        printf("\n-------Time CONVERTER-------");
        printf("\n1. Second. \n2. Minute. \n3. Hours.");
        printf("\nEnter your choice: ");
        scanf("%d", &ch2);

        if (ch2 == 1)
        {
        Seconds:

            printf("\nEnter the time in Second: ");
            scanf("%f", &input);

            printf("\n1. Second. \n2. Minutes. \n3. Hours.");
            printf("\nEnter yout choice to convert the time into: ");
            scanf("%d", &ch3);

            if (ch3 == 1)
            {
                result = input;
                printf("%f Seconds = %f Seconds.", input, result);
            }
            else if (ch3 == 2)
            {
                result = input / 60;
                printf("%f Seconds = %f Minutes.", input, result);
            }
            else if (ch3 == 3)
            {
                result = (input / 60) / 60;
                printf("%f Seconds = %f Hours.", input, result);
            }
            else
            {
                printf("\nINVALID CHOICE!!!!!");
            }

            printf("\nDo you want to continue with Seconds?(press 1): ");
            scanf("%d", &ch4);
            if (ch4 == 1)
            {
                goto Seconds;
            }
            else
            {
                printf("\nTHANK YOU!!!");
            }
        }
        else if (ch2 == 2)
        {
        Minutes:

            printf("\nEnter the time in Minute: ");
            scanf("%f", &input);

            printf("\n1. Second. \n2. Hour. \n3. Minute.");
            printf("\nEnter yout choice to convert the time into: ");
            scanf("%d", &ch3);

            if (ch3 == 1)
            {
                result = input * 60;
                printf("%f Minutes = %f Seconds.", input, result);
            }
            else if (ch3 == 2)
            {
                result = input;
                printf("%f Minutes = %f Minutes.", input, result);
            }
            else if (ch3 == 3)
            {
                result = input / 60;
                printf("%f Minutes = %f Hours.", input, result);
            }
            else
            {
                printf("\nINVALID CHOICE!!!!!");
            }

            printf("\nDo you want to continue with Minutes?(press 1): ");
            scanf("%d", &ch4);
            if (ch4 == 1)
            {
                goto Minutes;
            }
            else
            {
                printf("\nTHANK YOU!!!");
            }
        }
        else if (ch2 == 3)
        {
        Hours:

            printf("\nEnter the amount of Hour: ");
            scanf("%f", &input);

            printf("\n1. Second. \n2. Minute. \n3. Hour.");
            printf("\nEnter yout choice to convert the time into: ");
            scanf("%d", &ch3);

            if (ch3 == 1)
            {
                result = (input * 60) * 60;
                printf("%f Hours = %f Seconds.", input, result);
            }
            else if (ch3 == 2)
            {
                result = input * 60;
                printf("%f Hours = %f Minutes.", input, result);
            }
            else if (ch3 == 3)
            {
                result = input;
                printf("%f Hours = %f Hours.", input, result);
            }
            else
            {
                printf("\nINVALID CHOICE!!!!!");
            }

            printf("\nDo you want to continue with Hour?(press 1): ");
            scanf("%d", &ch4);
            if (ch4 == 1)
            {
                goto Hours;
            }
            else
            {
                printf("\nTHANK YOU!!!");
            }
        }
        else
        {
            printf("\nINVALID CHOICE!!!!!");
        }

        printf("\nDo you want to continue with Time Converter?(press 1): ");
        scanf("%d", &ch5);
        if (ch5 == 1)
        {
            goto Time;
        }
        printf("\n----------THANK YOU----------");
    }
    else
    {
        printf("\nINVALID CHOICE!!!!!");
    }

    printf("\nDo you want to continue with Converter?(press 1): ");
    scanf("%d", &ch6);

    if (ch6 == 1)
    {
        goto menu;
    }

    printf("\n----------THANK YOU----------");
}
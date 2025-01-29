#include<stdio.h>

int main() {
    int customernum, numberofunits;
    char customname[10];
    float total, gst, finaltotal;

    printf("\nEnter the Customer Number: ");
    scanf("%d", &customernum);

    printf("\nEnter the Customer Name: ");
    scanf("%s", &customname);

    printf("\nEnter the Number of Units: ");
    scanf("%d", &numberofunits);

    if (numberofunits < 100) {
        total = numberofunits * 3.33;
    }
    else if ((numberofunits > 100) && (numberofunits < 300)) {
        total = (100 * 3.33) + (numberofunits - 100) * 5.55;
    }
    else if ((numberofunits > 300) && (numberofunits < 500)) {
        total = (100 * 3.33) + (200 * 5.55) + (numberofunits - 300) * 7.77;
    }
    else {
        total = (100 * 3.33) + (200 * 5.55) + (200 * 7.77) + (numberofunits - 500) * 11.11;
    }

    total = total+ 500;
    gst = total * 0.06;
    finaltotal = total + gst;

    printf("\n\t---------------------------------------------------------");
    printf("\n\t|\t\t Electricity Bill \t\t\t|");
    printf("\n\t---------------------------------------------------------");
    printf("\n\t|\tCustomer Number\t\t|\t%d\t\t|", customernum);
    printf("\n\t|\tCustomer Name\t\t|\t%s\t\t|", customname);
    printf("\n\t|\tNumber of Units\t\t|\t%d\t\t|", numberofunits);
    printf("\n\t|\tTotal\t\t\t|\t%.2f\t\t|", total);
    printf("\n\t|\tGST\t\t\t|\t%.2f\t\t|", gst);
    printf("\n\t|\tFinal Total\t\t|\t%.2f\t\t|", finaltotal);
    printf("\n\t---------------------------------------------------------");
}
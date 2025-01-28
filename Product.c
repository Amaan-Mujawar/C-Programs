#include<stdio.h>

int main() {
    int pid, price, qty, total;
    char pname[10];
    float cgst, sgst, ftotal;

    printf("\nEnter the product id: ");
    scanf("%d", &pid);

    printf("\nEnter the product name: ");
    scanf("%s", pname);

    printf("\nEnter the product price: ");
    scanf("%d", &price);

    printf("\nEnter the product quantity: ");
    scanf("%d", &qty);

    total = price * qty;
    cgst = total * 0.06;
    sgst = total * 0.06;
    ftotal = total + cgst + sgst;

    printf("\n-----------------------------------------");
    printf("\n\t---Product Bill---");
    printf("\n-----------------------------------------");
    printf("\n\tProduct ID = %d.", pid);
    printf("\n\tProduct Name = %s.", pname);
    printf("\n\tProduct Price = %d.", price);
    printf("\n\tProduct Quantity = %d.", qty);
    printf("\n\tTotal = %d.", total);
    printf("\n-----------------------------------------");
    printf("\n\tProduct CGST = %.2f.", cgst);
    printf("\n\tProduct SGST = %.2f.", sgst);
    printf("\n\tFinal Total = %.2f.", ftotal);
    printf("\n-----------------------------------------");

    return 0;
}
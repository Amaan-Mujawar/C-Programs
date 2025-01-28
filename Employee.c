#include<stdio.h>

int main() {
    int empid, basic;
    char empname[10];
    float hra, ma, ta, sa, pf, grosssalary;

    printf("\nEnter the Employee ID: ");
    scanf("%d", &empid);

    printf("\nEnter the Employee Name: ");
    scanf("%s", empname);

    printf("\nEnter the Employee Basic Salary: ");
    scanf("%d", &basic);

    hra = basic * 0.4;
    ta = basic * 0.08;
    ma = basic * 0.07;
    sa = basic * 0.06;
    pf = basic * 0.09;
    grosssalary = ((basic + hra + ta + ma +sa) - pf);

    printf("\n\t---------------------------------------------------------");
    printf("\n\t|\tEmployee ID \t\t|\t %d \t\t|", empid);
    printf("\n\t|\tEmployee Name \t\t|\t %s \t\t|", empname);
    printf("\n\t|\tEmployee Basic Salary \t|\t %d \t\t|", basic);
    printf("\n\t---------------------------------------------------------");
    printf("\n\t|\tEmployee HRA \t\t|\t %.2f \t|", hra);
    printf("\n\t|\tEmployee TA \t\t|\t %.2f \t|", ta);
    printf("\n\t|\tEmployee MA \t\t|\t %.2f \t|", ma);
    printf("\n\t|\tEmployee SA \t\t|\t %.2f \t|", sa);
    printf("\n\t|\tEmployee PF \t\t|\t %.2f \t|", pf);
    printf("\n\t---------------------------------------------------------");
    printf("\n\t|\tEmployee Gross Salary \t|\t %.2f \t|", grosssalary);
    printf("\n\t---------------------------------------------------------");
    return 0;
}
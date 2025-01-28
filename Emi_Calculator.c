/*#include<stdio.h>
#include<math.h>

int main() {
    float loanamount, interest, totalinterest, finaltotal, emi;
    int tenure;

    printf("\nEnter the Loan amount: ");
    scanf("%f", &loanamount);

    printf("\nEnter the Interest rate: ");
    scanf("%f", &interest);

    printf("\nEnter the tenure(in months): ");
    scanf("%d", &tenure);

    totalinterest = interest;
}
*/



#include <stdio.h>
#include <math.h>

int main() {
    float loanamount, annual_interest_rate, monthly_interest_rate, emi;
    float totalinterest, finaltotal;
    int tenure;

    printf("\nEnter the Loan amount: ");
    scanf("%f", &loanamount);

    printf("\nEnter the Annual Interest rate (in percentage): ");
    scanf("%f", &annual_interest_rate);

    printf("\nEnter the tenure (in months): ");
    scanf("%d", &tenure);

    monthly_interest_rate = annual_interest_rate / (12 * 100);

    emi = (loanamount * monthly_interest_rate * pow(1 + monthly_interest_rate, tenure)) / 
          (pow(1 + monthly_interest_rate, tenure) - 1);

    finaltotal = emi * tenure;
    totalinterest = finaltotal - loanamount;

    printf("\nMonthly EMI: %.2f", emi);
    printf("\nTotal payment over the tenure: %.2f", finaltotal);
    printf("\nTotal interest paid: %.2f", totalinterest);

    return 0;
}


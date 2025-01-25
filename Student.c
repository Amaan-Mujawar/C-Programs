#include<stdio.h>

int main() {
    int rollno;
    char studname[10];
    int sub1, sub2, sub3, total;
    float perct;

    printf("\nEnter student roll number: ");
    scanf("%d", &rollno);

    printf("\nEnter student name: ");
    scanf("%s", &studname);

    printf("\nEnter marks for maths: ");
    scanf("%d", &sub1);

    printf("\nEnter marks for physics: ");
    scanf("%d", &sub2);

    printf("\nEnter marks for chemistry: ");
    scanf("%d", &sub3);

    total = sub1 + sub2 + sub3;
    perct = total/3;

    printf("\n\t---------------------------------------------------------");
    printf("\n\t|\tRoll Number \t\t|\t %d \t\t|", rollno);
    printf("\n\t|\tName \t\t\t|\t %s \t\t|", studname);
    printf("\n\t|\tMath \t\t\t|\t %d \t\t|", sub1);
    printf("\n\t|\tPhysics \t\t|\t %d \t\t|", sub2);
    printf("\n\t|\tChemistry \t\t|\t %d \t\t|", sub3);
    printf("\n\t|\tTotal \t\t\t|\t %d \t\t|", total);
    printf("\n\t|\tPercentage \t\t|\t %.2f \t\t|", perct);
    printf("\n\t---------------------------------------------------------");

    if ((sub1 >= 40) && (sub2 >= 40) && (sub3 >= 40))
    {
        printf("\n\t|\t\t\t PASS \t\t\t\t|");
        printf("\n\t---------------------------------------------------------");

        if ((perct >= 40) && (perct < 60)) {
            printf("\n\t|\tGrade \t\t\t|\t C \t\t|");
            printf("\n\t---------------------------------------------------------");
        }
        else if ((perct > 60) && (perct < 75)) {
            printf("\n\t|\tGrade \t\t\t|\t B \t\t|");
            printf("\n\t---------------------------------------------------------");
        }
        else if ((perct > 75) && (perct < 90)) {
            printf("\n\t|\tGrade \t\t\t|\t A \t\t|");
            printf("\n\t---------------------------------------------------------");
        }
        else if ((perct > 90) && (perct <= 100)) {
            printf("\n\t|\tGrade \t\t\t|\t O \t\t|");
            printf("\n\t---------------------------------------------------------");
        }
    }else
    {
        printf("\n\t|\t\t\t FAIL \t\t\t\t|");
        printf("\n\t---------------------------------------------------------");
    }
    return 0;
}
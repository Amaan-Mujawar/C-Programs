#include<stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("The ASCII value of %c is %d.\n", ch, ch);

    if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')) {
        printf("\nIts a Capital Vowel.\n");
    }
    else if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')) {
        printf("\nIts a Small Vowel.\n");
    }
    else if ((ch >= 65) || (ch <= 90)) {
        printf("\nIts a Capital Character.\n");
    }
    else if ((ch >= 97) || (ch <= 122)) {
        printf("\nIts a Small Character.\n");
    }
    else if ((ch >= 48) || (ch == 57)) {
        printf("\nIts a Number.\n");
    }
    else {
        printf("\nIts Other Character.\n");
    }
}
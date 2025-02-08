#include <stdio.h>

void printZPattern(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 || j == size - i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int size;

    printf("Enter the size of the 'Z' pattern (must be >= 3): ");
    scanf("%d", &size);

    if (size < 3) {
        printf("Size must be 3 or greater.\n");
        return 1;
    }

    printZPattern(size);

    return 0;
}

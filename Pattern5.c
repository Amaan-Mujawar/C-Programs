#include <stdio.h>

void printMirroredZPattern(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Print '*' for the top row, bottom row, and the diagonal from top-left to bottom-right
            if (i == 0 || i == size - 1 || j == i) {
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

    // Get the size of the pattern from the user
    printf("Enter the size of the mirrored 'Z' pattern (must be >= 3): ");
    scanf("%d", &size);

    // Validate the size input
    if (size < 3) {
        printf("Size must be 3 or greater.\n");
        return 1;
    }

    // Print the mirrored 'Z' pattern
    printMirroredZPattern(size);

    return 0;
}

#include <stdio.h>

int main() {
    // 1. Declare a 2D array with 6 Rows and 4 Columns
    int matrix[6][4];
    int i, j;
    int value = 1;

    printf("=== 2D Array Traversal (6 Rows x 4 Columns) ===\n\n");

    // 2. Initialize the array
    // use a nested loop to fill it with numbers 1 to 24 automatically.
    // 'i' controls the ROW, 'j' controls the COLUMN.
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 4; j++) {
            matrix[i][j] = value;
            value++;
        }
    }

    // 3. Traverse and Print
    // loop through each row, and inside each row, print every column.
    for(i = 0; i < 6; i++) {
        printf("Row %d:  ", i); // Label the row for clarity

        for(j = 0; j < 4; j++) {
            // Use \t (tab) to align the numbers neatly
            printf("%d\t", matrix[i][j]);
        }

        printf("\n"); // Move to the next line after finishing a row
    }

    return 0;
}

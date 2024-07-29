#include <stdio.h>

int main() {
    int num[5][5] = {
        {6, 4, 7, 8, 9},
        {3, 7, 1, 9, 9},
        {8, 6, 4, 2, 7},
        {2, 4, 2, 5, 9},
        {4, 1, 6, 7, 3}
    };

    int rowSum[5] = {0}; // Array to store the sum of each row
    int colSum[5] = {0}; // Array to store the sum of each column

    // Calculate the sum of each row and column
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            rowSum[i] += num[i][j];
            colSum[j] += num[i][j];
        }
    }

    // Print the sum of each row
    printf("Sum of each row ~\n");
    for (int i = 0; i < 5; i++) {
        printf("Row %d: %d\n", i, rowSum[i]);
    }

    // Print the sum of each column
    printf("Sum of each column ~\n");
    for (int j = 0; j < 5; j++) {
        printf("Column %d: %d\n", j, colSum[j]);
    }

    return 0;
}

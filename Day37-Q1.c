//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols], row_sum[rows];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < rows; i++) {
        row_sum[i] = 0;
        for(int j = 0; j < cols; j++) {
            row_sum[i] += matrix[i][j];
        }
    }

    printf("Sum of each row:\n");
    for(int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, row_sum[i]);
    }

    return 0;
}
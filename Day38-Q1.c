//Add two matrices.
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int mat1[rows][cols], mat2[rows][cols], sum[rows][cols];

    printf("Enter elements of Matrix 1:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of Matrix 2:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &mat2[i][j]);

    // Add matrices
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    printf("Sum of two matrices:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
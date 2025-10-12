//Perform diagonal traversal of a matrix.
#include <stdio.h>

void diagonalTraversal(int matrix[][100], int m, int n) {
    int i, j;

    // Traverse diagonals starting from first column
    for (int row = 0; row < m; row++) {
        i = row;
        j = 0;

        // Traverse upwards along the diagonal
        while (i >= 0 && j < n) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }

    // Traverse diagonals starting from bottom row (excluding first column)
    for (int col = 1; col < n; col++) {
        i = m - 1;
        j = col;

        // Traverse upwards along the diagonal
        while (i >= 0 && j < n) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }
}

int main() {
    int matrix[100][100];
    int rows, cols;

    
    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);


    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    printf("Diagonal traversal of matrix:\n");
    diagonalTraversal(matrix, rows, cols);

    return 0;
}
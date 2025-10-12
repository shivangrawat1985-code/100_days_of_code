//Check if a matrix is symmetric.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n], transpose[n][n];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }


    int symmetric = 1; 
        for(int i = 0; i < n && symmetric; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] != transpose[i][j]) {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
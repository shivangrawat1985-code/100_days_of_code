
//Read and print elements of a one-dimensional array.
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read elements
    }

    printf("The elements of the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print elements
    }
    printf("\n");

    return 0;
}
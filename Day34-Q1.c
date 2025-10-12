//Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, i, element, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n+1];  // Extra space for the new element

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position to insert the element (1 to %d): ", n+1);
    scanf("%d", &pos);

    if(pos < 1 || pos > n+1) {
        printf("Invalid position!\n");
        return 1;
    }

    // Move elements to the right from the given position
    for(i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert the element
    arr[pos - 1] = element;
    n++;  // Increase the size of the array

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

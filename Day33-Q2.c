//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, i, element, pos;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n+1];  // Create array with extra space for new element

    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the position to insert the element
    pos = n;
    for(i = 0; i < n; i++) {
        if(arr[i] > element) {
            pos = i;
            break;
        }
    }

    // Shift elements right to create space
    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert the element
    arr[pos] = element;
    n++;  // Increase array size

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
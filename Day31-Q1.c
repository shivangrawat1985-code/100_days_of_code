//Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n, i, searchElement, foundIndex = -1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    
    for(i = 0; i < n; i++) {
        if(arr[i] == searchElement) {
            foundIndex = i;
            break;
        }
    }

    if(foundIndex != -1) {
        printf("Element %d found at index %d\n", searchElement, foundIndex);
    } else {
        printf("Element %d not found in the array\n", searchElement);
    }

    return 0;
}
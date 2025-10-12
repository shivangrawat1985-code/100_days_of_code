//earch in a sorted array using binary search.
#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == target)
            return mid;  // Element found
        else if(arr[mid] < target)
            left = mid + 1;  // Search right half
        else
            right = mid - 1;  // Search left half
    }
    return -1;  // Element not found
}

int main() {
    int n, i, target;

    printf("Enter the number of elements (sorted array): ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);
    if(result != -1)
        printf("Element %d found at index %d\n", target, result);
    else
        printf("Element %d not found in the array\n", target);

    return 0;
}
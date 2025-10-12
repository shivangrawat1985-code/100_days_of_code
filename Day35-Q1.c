//Find the second largest element in an array.
#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int largest = INT_MIN, secondLargest = INT_MIN;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("Second largest element is %d\n", secondLargest);
    }

    return 0;
}
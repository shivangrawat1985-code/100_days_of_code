//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
int findRepeated(int* nums, int size) {
    int actual_sum = 0;
    int expected_sum = (size * (size - 1)) / 2;

    for(int i = 0; i < size; i++) {
        actual_sum += nums[i];
    }
    
    return actual_sum - expected_sum;
}

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int nums[size];
    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
    
    int repeated = findRepeated(nums, size);
    printf("Repeated element: %d\n", repeated);
    
    return 0;
}
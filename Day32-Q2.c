//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int num, digit, maxDigit, maxCount;
    int count[10] = {0};  

    printf("Enter an integer number: ");
    scanf("%d", &num);


    if (num < 0) {
        num = -num;
    }

    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    maxCount = count[0];
    maxDigit = 0;
    for(int i = 1; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs most frequently (%d times).\n", maxDigit, maxCount);

    return 0;
}
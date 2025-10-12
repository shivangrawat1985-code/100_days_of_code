//Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    int num, i, sum = 0;

    scanf("%d", &num);

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == num) {
        printf("Perfect Number\n");
    } else {
        printf("Not a Perfect Number\n");
    }

    return 0;
}

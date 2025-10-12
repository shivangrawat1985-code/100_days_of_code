//Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, n, rem, fact, i, sum = 0;

    scanf("%d", &num);

    n = num;

    while (n > 0) {
        rem = n % 10;
        fact = 1;
        for (i = 1; i <= rem; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }

    if (sum == num) {
        printf("Strong Number\n");
    } else {
        printf("Not a Strong Number\n");
    }

    return 0;
}

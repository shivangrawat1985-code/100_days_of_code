//Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, n, first, last, digits = 0, power = 1, middle, result;

    scanf("%d", &num);

    last = num % 10;
    n = num;

    while (n >= 10) {
        n = n / 10;
        digits++;
        power = power * 10;
    }
    first = n;

    middle = (num % power) / 10;

    result = last * power + middle * 10 + first;

    printf("%d\n", result);

    return 0;
}

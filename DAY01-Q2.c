/*
Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
*/

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum=%d, Diff=%d, Product=%d", a + b, a - b, a * b);
    if (b != 0)
        printf(", Quotient=%d\n", a / b);
    else
        printf(", Quotient=undefined (division by zero)\n");

    return 0;
}
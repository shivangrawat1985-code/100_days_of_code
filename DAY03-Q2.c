/*
Q6: Write a program to swap two numbers using a third variable.
*/

#include <stdio.h>

int main() {
    int a, b, s;
    printf("ENter two numbers: ");
    scanf("%d %d", &a, &b);

    s = a;
    a = b;
    b = s;

    printf("After swap: %d %d\n", a, b);
    return 0;
}
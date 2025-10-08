/*
Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/

#include <stdio.h>

int main() {
    int l, b;
    printf("Input Length and Breadth respectively: ");
    scanf("%d %d", &l, &b);
    printf("Area=%d, Perimeter=%d\n", l * b, 2 * (l + b));
    return 0;
}
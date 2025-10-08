/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.
*/

#include <stdio.h>


int main() {
    float r, pi;
    pi=3.14159;
    printf("Enter radius of the circle: ");
    scanf("%f", &r);
    printf("Area=%.2f, Circumference=%.2f\n", pi * r * r, 2 * pi * r);
    return 0;
}
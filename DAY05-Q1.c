/*
Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
*/

#include <stdio.h>

int main() {
    float p, r, t;
    scanf("%f %f %f", &p, &r, &t);

    float si = (p * r * t) / 100;
    float ci = p * pow((1 + r / 100), t) - p;

    printf("Simple Interest=%.0f, Compound Interest=%.2f\n", si, ci);

    return 0;
}
//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, num = 1.0, den = 1.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (num / den);
        num = num + 2;
        den = den + 2;
    }

    printf("Sum = %.2f\n", sum);

    return 0;
}

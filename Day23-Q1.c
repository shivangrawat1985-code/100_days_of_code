//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, num = 2.0, den = 3.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (num / den);
        num = num + 2;
        den = den + 4;
    }

    printf("Sum = %.2f\n", sum);

    return 0;
}

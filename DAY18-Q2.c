#include <stdio.h>

// Function to find the greatest common divisor (GCD) using the Euclidean algorithm
int gcd(int a, int b)
{
    // The algorithm stops when the second number becomes 0, and the first number is the GCD.
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Driver code
int main()
{
    int a = 20, b = 28;
    printf("%d", gcd(a, b));
    return 0;
}
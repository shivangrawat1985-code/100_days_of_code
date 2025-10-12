#include <stdio.h>

// Recursive function to return gcd of a and b
long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    // Using the formula: LCM * GCD = a * b
    // To prevent potential overflow, it's calculated as (a / GCD) * b
    return (a / gcd(a, b)) * (long long)b;
}

// Driver program to test the function
int main()
{
    int a = 15, b = 20;
    printf("LCM of %d and %d is %lld\n", a, b, lcm(a, b));
    return 0;
}
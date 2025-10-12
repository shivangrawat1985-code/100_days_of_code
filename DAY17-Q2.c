#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
  
    // Check if n is 1 or 0
    if (n <= 1)
        return false;

    // Check if n is 2 or 3
    if (n == 2 || n == 3)
        return true;

    // Check whether n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    
    // Check from 5 to square root of n
    // Iterate i by (i+6)
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int main() {
    int n = 7;  
    if( isPrime(n)) printf("%s","true");
  	else printf("%s","false");
    return 0;
}
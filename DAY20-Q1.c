#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long number;
    long long product = 1;
    int digit;
    int oddDigitFound = 0;

    printf("Enter an integer: ");
    scanf("%lld", &number);

    long long tempNumber = (number < 0) ? -number : number;

    if (tempNumber == 0)
    {
        printf("The number is 0, which has no odd digits.\n");
        return 0;
    }

    while (tempNumber > 0)
    {
        digit = tempNumber % 10;

        if (digit % 2 != 0)
        {
            oddDigitFound = 1;
            product = product * digit;
        }

        tempNumber = tempNumber / 10;
    }

    if (oddDigitFound)
    {
        printf("The product of the odd digits in %lld is %lld.\n", number, product);
    }
    else
    {
        printf("There were no odd digits in the number %lld.\n", number);
    }

    return 0;
}

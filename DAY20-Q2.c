#include <stdio.h>
#include <string.h>

int main()
{
    char binary[101];
    int i;
    int length;
    int error = 0;

    printf("Enter a binary number: ");
    scanf("%100s", binary);

    length = strlen(binary);

    for (i = 0; i < length; i++)
    {
        if (binary[i] != '0' && binary[i] != '1')
        {
            printf("Error: Invalid input. Please enter a valid binary number.\n");
            error = 1;
            break;
        }
    }

    if (!error)
    {
        printf("The 1's complement is: ");
        for (i = 0; i < length; i++)
        {
            if (binary[i] == '0')
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}

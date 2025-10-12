#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Check length first — if not equal, they can’t be rotations
    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not rotations of each other.\n");
        return 0;
    }

    // Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // If str2 is a substring of temp → rotation
    if (strstr(temp, str2) != NULL)
        printf("Strings are rotations of each other.\n");
    else
        printf("Strings are not rotations of each other.\n");

    return 0;
}

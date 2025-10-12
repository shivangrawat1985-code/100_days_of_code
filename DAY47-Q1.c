#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i, isAnagram = 1;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // If lengths are different, they can't be anagrams
    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams (different lengths)\n");
        return 0;
    }

    // Count frequency of each lowercase letter
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            count1[str1[i] - 'a']++;
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            count1[str1[i] - 'A']++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            count2[str2[i] - 'a']++;
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            count2[str2[i] - 'A']++;
    }

    // Compare frequency arrays
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("The strings are

//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int maxLen = 0;
    int lastIndex[256]; // ASCII character map

    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int left = 0;

    for (int right = 0; right < n; right++) {
        char current = s[right];
        if (lastIndex[(int)current] >= left) {
            left = lastIndex[(int)current] + 1;
        }
        lastIndex[(int)current] = right;
        int currLen = right - left + 1;
        if (currLen > maxLen) {
            maxLen = currLen;
        }
    }

    return maxLen;
}

int main() {
    char s[1001];
    printf("Enter string: ");
    scanf("%1000s", s);

    int result = lengthOfLongestSubstring(s);
    printf("%d\n", result);

    return 0;
}
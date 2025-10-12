#include <stdio.h>
#include <string.h>

void print_all_substrings(const char *str) {
    int i, j, k;
    int n = strlen(str);

    printf("String: \"%s\"\n", str);
    printf("All Substrings:\n");

    // Outer loop: Fixes the starting point (i) of the substring
    for (i = 0; i < n; i++) {
        // Inner loop: Fixes the ending point (j) of the substring
        for (j = i; j < n; j++) {
            
            // Innermost Loop (or function): Prints the substring from i to j
            printf("  "); // Indentation for clarity
            
            // Loop from the start index 'i' up to the end index 'j'
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n"); // Newline after printing one substring
        }
    }
}

int main() {
    char test_str[] = "ABC";
    
    print_all_substrings(test_str);
    
    printf("\n-------------------------\n\n");
    
    char test_str_long[] = "CODE";
    print_all_substrings(test_str_long);

    return 0;
}
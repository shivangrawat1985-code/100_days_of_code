#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to print initials with the surname in full
void print_initials_with_surname(const char *name) {
    int i;
    int len = strlen(name);
    int last_name_start = -1;
    
    // --- Pass 1: Find the start of the last name ---
    
    // 1. Skip trailing spaces
    int end = len - 1;
    while (end >= 0 && name[end] == ' ') {
        end--;
    }
    
    // 2. Search backward from the last non-space character for the first space.
    // This position + 1 is the start of the last name.
    for (i = end; i >= 0; i--) {
        if (name[i] == ' ') {
            // Found the space preceding the last word (surname)
            last_name_start = i + 1;
            break;
        }
    }
    
    // If no space was found, the whole string is one name (the surname)
    if (last_name_start == -1) {
        last_name_start = 0;
    }
    
    
    // --- Pass 2: Print initials for forenames and the full surname ---
    
    i = 0;
    
    // 1. Skip any leading spaces
    while (name[i] == ' ') {
        i++;
    }
    
    // Print the first initial (Forename)
    if (name[i] != '\0' && i < last_name_start) {
        printf("%c", toupper(name[i]));
    }
    
    // 2. Iterate through the string up to the start of the last name
    while (i < last_name_start - 1) {
        if (name[i] == ' ') {
            // Skip multiple spaces
            while (name[i] == ' ' && i < last_name_start - 1) {
                i++;
            }
            // If we are still within the initials zone and the character is valid
            if (name[i] != '\0' && i < last_name_start) {
                printf(".%c", toupper(name[i])); // Print middle name initial
            }
        }
        i++;
    }
    
    // 3. Print the full surname (starting from last_name_start)
    if (last_name_start != 0) {
        printf(" "); // Add a space before the surname
    }
    printf("%s\n", &name[last_name_start]);
}

int main() {
    char name1[] = "George Raymond Richard Martin";
    char name2[] = "alan mathison turing";
    char name3[] = " Nikola Tesla "; // Trailing space test
    char name4[] = "Cher"; // Single word test
    
    printf("Input: '%s'\nOutput: ", name1);
    print_initials_with_surname(name1);
    
    printf("Input: '%s'\nOutput: ", name2);
    print_initials_with_surname(name2);
    
    printf("Input: '%s'\nOutput: ", name3);
    print_initials_with_surname(name3);
    
    printf("Input: '%s'\nOutput: ", name4);
    print_initials_with_surname(name4);

    return 0;
}
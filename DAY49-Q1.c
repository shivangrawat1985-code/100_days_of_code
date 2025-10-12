#include <stdio.h>
#include <ctype.h> // Required for toupper()

void print_initials(const char *name) {
    int i = 0;
    
    // --- Step 1: Print the initial of the first name ---
    // Skip any leading spaces
    while (name[i] == ' ') {
        i++;
    }

    // Print the first character (initial of the first name)
    if (name[i] != '\0') {
        printf("%c", toupper(name[i]));
    }
    
    // --- Step 2: Traverse and print initials after spaces ---
    while (name[i] != '\0') {
        // Check for a space
        if (name[i] == ' ') {
            // Move to the next character
            i++; 
            
            // Skip any extra spaces (e.g., "John  Doe")
            while (name[i] == ' ') {
                i++;
            }
            
            // If the current character is not the null terminator, 
            // it must be the start of a new word/name. Print its initial.
            if (name[i] != '\0') {
                printf(".%c", toupper(name[i])); 
            }
        }
        i++;
    }
    printf("\n"); // Newline for clean output
}

int main() {
    char name1[] = "George Raymond Richard Martin";
    char name2[] = "  alan mathison turing";
    char name3[] = "marie curie ";
    
    printf("Name: %s\nInitials: ", name1);
    print_initials(name1);
    
    printf("Name: %s\nInitials: ", name2);
    print_initials(name2);
    
    printf("Name: %s\nInitials: ", name3);
    print_initials(name3);
    
    return 0;
}
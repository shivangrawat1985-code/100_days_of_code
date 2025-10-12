#include <stdio.h>
#include <string.h>

// Function to reverse a substring (a single word)
void reverse_word(char *start, char *end) {
    char temp;
    // Pointers move towards each other, swapping characters
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

// Function to reverse each word in the entire string
void reverse_words_in_sentence(char *sentence) {
    char *word_start = sentence;
    char *p = sentence; // Pointer to traverse the string

    // Traverse the string until the null terminator is reached
    while (*p != '\0') {
        // Check for the end of a word: space or end of string
        if (*p == ' ' || *(p + 1) == '\0') {
            char *word_end;
            
            // If it's a space, the word ends one character before it
            if (*p == ' ') {
                word_end = p - 1;
            } 
            // If it's the null terminator, the word ends at the character 'p'
            else {
                word_end = p; 
            }
            
            // Reverse the characters in the word
            reverse_word(word_start, word_end);
            
            // Move the start pointer to the beginning of the next word
            word_start = p + 1;
        }
        p++;
    }
}

int main() {
    // Note: The string must be stored in a writeable memory area (e.g., an array), 
    // not a string literal, because we are modifying it.
    char str[] = "The quick brown fox jumps"; 

    printf("Original Sentence: %s\n", str);

    reverse_words_in_sentence(str);

    printf("Reversed Words:    %s\n", str);

    return 0;
}
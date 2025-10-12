#include <stdio.h>

int custom_strlen(const char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

void print_characters_on_new_line(const char *str) {
    int i = 0;
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }
}

void count_vowels_consonants(const char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    int i = 0;
    char ch;

    while (str[i] != '\0') {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        i++;
    }
}

void to_uppercase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main() {
    char simple_string[] = "easy code example";
    
    printf("Original String: \"%s\"\n", simple_string);

    int length = custom_strlen(simple_string);
    printf("1. Character Count: %d\n\n", length);

    printf("2. Characters on New Line:\n");
    print_characters_on_new_line(simple_string);
    printf("\n");

    int vowel_count = 0;
    int consonant_count = 0;
    count_vowels_consonants(simple_string, &vowel_count, &consonant_count);
    printf("3. Vowels: %d, Consonants: %d\n\n", vowel_count, consonant_count);

    printf("4. Converting to Uppercase...\n");
    to_uppercase(simple_string);
    printf("Uppercase String: \"%s\"\n", simple_string);

    return 0;
}

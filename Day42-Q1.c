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
            ch = ch + ('a' - 'A');
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

int main() {
    const char *my_string = "Hello, world!";
    int length1 = custom_strlen(my_string);
    printf("String: \"%s\"\n", my_string);
    printf("Character Count (Manual): %d\n\n", length1);

    print_characters_on_new_line(my_string);
    printf("\n");

    int vowel_count = 0;
    int consonant_count = 0;
    count_vowels_consonants(my_string, &vowel_count, &consonant_count);
    printf("Vowels: %d, Consonants: %d\n\n", vowel_count, consonant_count);

    const char *empty_string = "";
    int length2 = custom_strlen(empty_string);
    printf("String: \"%s\"\n", empty_string);
    printf("Character Count (Manual): %d\n\n", length2);
    
    const char *spaced_string = "C programming is fun";
    int length3 = custom_strlen(spaced_string);
    printf("String: \"%s\"\n", spaced_string);
    printf("Character Count (Manual): %d\n\n", length3);

    return 0;
}

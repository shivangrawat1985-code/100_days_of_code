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

void reverse_string(char *str) {
    int length = custom_strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int is_palindrome(const char *str) {
    int length = custom_strlen(str);
    int start = 0;
    int end = length - 1;
    
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }
    
    return 1;
}

void count_other_chars(const char *str, int *spaces, int *digits, int *special) {
    *spaces = 0;
    *digits = 0;
    *special = 0;
    int i = 0;
    char ch;

    while (str[i] != '\0') {
        ch = str[i];

        if (ch == ' ') {
            (*spaces)++;
        } else if (ch >= '0' && ch <= '9') {
            (*digits)++;
        } else if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
            (*special)++;
        }
        i++;
    }
}

void replace_spaces_with_hyphens(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }
}

int count_char_frequency(const char *str, char target_char) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == target_char) {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char simple_string[] = "easy code example";
    char complex_string[] = "C0d3 1s F*n! 2024";
    char palindrome_test1[] = "madam";
    char palindrome_test2[] = "racecar";
    char hyphen_string[] = "replace all spaces in this string";
    char frequency_string[] = "programming is easy";
    char target_char = 'g';
    
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
    printf("\n");
    
    printf("5. Reversing String...\n");
    reverse_string(simple_string);
    printf("Reversed String: \"%s\"\n", simple_string);
    printf("\n");
    
    int spaces = 0;
    int digits = 0;
    int special = 0;
    count_other_chars(complex_string, &spaces, &digits, &special);
    printf("6. Analysis of String \"%s\"\n", complex_string);
    printf("   Spaces: %d, Digits: %d, Special Characters: %d\n\n", spaces, digits, special);

    printf("7. Palindrome Check\n");
    printf("String \"%s\": %s\n", palindrome_test1, is_palindrome(palindrome_test1) ? "Is a Palindrome" : "Is NOT a Palindrome");
    printf("String \"%s\": %s\n", palindrome_test2, is_palindrome(palindrome_test2) ? "Is a Palindrome" : "Is NOT a Palindrome");
    printf("\n");
    
    printf("8. Replacing Spaces with Hyphens...\n");
    printf("Original String: \"%s\"\n", hyphen_string);
    replace_spaces_with_hyphens(hyphen_string);
    printf("Hyphenated String: \"%s\"\n", hyphen_string);
    printf("\n");

    printf("9. Character Frequency Count\n");
    int freq = count_char_frequency(frequency_string, target_char);
    printf("String: \"%s\", Target: '%c'\n", frequency_string, target_char);
    printf("Frequency of '%c': %d\n", target_char, freq);

    return 0;
}

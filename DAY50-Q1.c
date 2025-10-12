#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Required for atoi()

// Array to hold the three-letter month abbreviations
const char *MONTHS[] = {
    "",     // Index 0 unused
    "Jan",
    "Feb",
    "Mar",
    "Apr",
    "May",
    "Jun",
    "Jul",
    "Aug",
    "Sep",
    "Oct",
    "Nov",
    "Dec"
};

void change_date_format(const char *input_date, char *output_buffer) {
    char day_str[3];
    char month_str[3];
    char year_str[5];
    int month_num;
    
    // Check if the input string is long enough
    if (strlen(input_date) < 10) {
        strcpy(output_buffer, "Invalid Date Format");
        return;
    }
    
    // 1. Extract the Day (dd)
    // Copies the first 2 characters to day_str
    strncpy(day_str, input_date, 2);
    day_str[2] = '\0'; // Null-terminate the string
    
    // 2. Extract the Month (mm)
    // Copies the characters at index 3 and 4 (after the first '/')
    strncpy(month_str, input_date + 3, 2);
    month_str[2] = '\0'; // Null-terminate the string
    
    // Convert month string to an integer
    month_num = atoi(month_str);

    // 3. Extract the Year (yyyy)
    // Copies the characters starting at index 6
    strncpy(year_str, input_date + 6, 4);
    year_str[4] = '\0'; // Null-terminate the string

    // 4. Validate Month Number and Format Output
    if (month_num >= 1 && month_num <= 12) {
        // Format the output string: dd-Mon-yyyy
        sprintf(output_buffer, "%s-%s-%s", 
                day_str, 
                MONTHS[month_num], 
                year_str);
    } else {
        strcpy(output_buffer, "Invalid Month Number");
    }
}

int main() {
    char date1[] = "25/04/2023"; // The example month
    char date2[] = "01/12/1999"; 
    char date3[] = "31/01/2000";
    
    // Buffer must be large enough to hold the output date (e.g., 10-Mar-2025\0 is 12 chars)
    char output_buffer[20]; 

    // Test Case 1
    change_date_format(date1, output_buffer);
    printf("Original: %s  ->  New: %s\n", date1, output_buffer);

    // Test Case 2
    change_date_format(date2, output_buffer);
    printf("Original: %s  ->  New: %s\n", date2, output_buffer);
    
    // Test Case 3
    change_date_format(date3, output_buffer);
    printf("Original: %s  ->  New: %s\n", date3, output_buffer);

    return 0;
}
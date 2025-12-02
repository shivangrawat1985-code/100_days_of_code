//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    char filename[100];
    char inputLine[1001];

    printf("Enter filename: ");
    scanf("%99s", filename);

    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the line to append: ");
    getchar();  // clear newline left in buffer
    fgets(inputLine, sizeof(inputLine), stdin);

    fprintf(file, "%s", inputLine);
    fclose(file);

    printf("File updated successfully with appended text.\n");

    return 0;
}
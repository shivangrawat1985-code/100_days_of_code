//Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *ptr = (struct Student*)malloc(sizeof(struct Student));
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    strcpy(ptr->name, "Unknown");
    ptr->roll = 0;
    ptr->marks = 0;

    printf("Enter name: ");
    scanf("%s", ptr->name);
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);
    printf("Enter marks: ");
    scanf("%d", &ptr->marks);
    
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", 
           ptr->name, ptr->roll, ptr->marks);
    
    free(ptr);
    
    return 0;
}
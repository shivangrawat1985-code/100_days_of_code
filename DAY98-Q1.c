//Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll_no;
    int marks;
} Student;

int main() {
    Student s1, s2;

    printf("Enter details of Student 1 (Name Roll No. Marks): ");
    scanf("%49s %d %d", s1.name, &s1.roll_no, &s1.marks);

    printf("Enter details of Student 2 (Name Roll No. Marks): ");
    scanf("%49s %d %d", s2.name, &s2.roll_no, &s2.marks);

    if (strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }

    return 0;
}
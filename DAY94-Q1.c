//Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>

typedef struct {
    char name[50];
    int roll_no;
    int marks;
} Student;

void printStudent(Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main() {
    Student s;

    printf("Enter name: ");
    scanf("%49s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter marks: ");
    scanf("%d", &s.marks);

    printStudent(s);

    return 0;
}
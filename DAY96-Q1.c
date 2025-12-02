//Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char name[50];
    int id;
    Date joiningDate;
} Employee;

int main() {
    Employee emp;

    printf("Enter name: ");
    scanf("%49s", emp.name);

    printf("Enter ID: ");
    scanf("%d", &emp.id);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           emp.name, emp.id,
           emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}
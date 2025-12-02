//Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

typedef struct {
    char name[50];
    int id;
    int age;
} Employee;

int main() {
    Employee emp;

    printf("Enter name: ");
    scanf("%49s", emp.name);

    printf("Enter ID: ");
    scanf("%d", &emp.id);

    printf("Enter age: ");
    scanf("%d", &emp.age);

    FILE *file = fopen("employee.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fwrite(&emp, sizeof(Employee), 1, file);
    fclose(file);

    printf("Data saved to employee.dat\n");

    // Reading from file
    Employee empRead;
    file = fopen("employee.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&empRead, sizeof(Employee), 1, file);
    fclose(file);

    printf("Employee data read from file:\n");
    printf("Name: %s | ID: %d | Age: %d\n", empRead.name, empRead.id, empRead.age);

    return 0;
}
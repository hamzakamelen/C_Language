/*Task 1:
There is a structure called employee that holds information like employee code, name, date of
joining. Write a program to create an array of the structure and enter some data into it. Then ask
the user to enter current date. Display the names of those employees whose tenure is 3 or more
than 3 years according to the given current date. */

#include <stdio.h>
#include <string.h>

struct Employee {
    int EmpCode;
    char name[50];
    int YearofJoining;
};

int main() {
    int numEmployees;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    struct Employee employeeData[numEmployees];
    int currentYear;

    printf("======= Employee Data =======\n");
    // Clear the input buffer after reading the number of employees
    while (getchar() != '\n');

    // Taking Employee data
    for (int i = 0; i < numEmployees; i++) {
        printf("======= Employee %d =======\n", i + 1);

        printf("Please Enter an Employee code: ");
        scanf("%d", &employeeData[i].EmpCode);

        printf("Please Enter Employee Name: ");
        // Clear the input buffer before reading the employee name
        while (getchar() != '\n');
        fgets(employeeData[i].name, 50, stdin);
        employeeData[i].name[strcspn(employeeData[i].name, "\n")] = '\0'; // Remove newline character

        printf("Please Enter the Year of Joining: ");
        scanf("%d", &employeeData[i].YearofJoining);
        printf("\n");
    }
    system("cls");

    printf("Enter Current Year: ");
    scanf("%d", &currentYear);

    printf("Employees with tenure 3 or more:\n");
    for (int i = 0; i < numEmployees; i++) {
        int tenure = currentYear - employeeData[i].YearofJoining;
        if (tenure >= 3) {
            printf("Name: %s\n", employeeData[i].name);
            printf("Year of Joining: %d\n", employeeData[i].YearofJoining);
            printf("\n");
        }
    }

    return 0;
}

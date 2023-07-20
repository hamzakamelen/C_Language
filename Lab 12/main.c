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
} employeeData[2];

int main() {
    int currentYear;
    // Taking Employee data
    for (int i = 0; i < 2; i++) {
        // Clear the input buffer before reading the employee name
        while (getchar() != '\n');
        printf("======= Employee %d =======",i+1);
        
        printf("\nPlease Enter an Employee code: ");
        scanf("%d", &employeeData[i].EmpCode);
        
        printf("Please Enter Employee Name: ");
        fgets(employeeData[i].name,50,stdin);
        employeeData[i].name[strlen(employeeData[i].name)-1]=0;

        printf("Please Enter the Year of Joining: ");
        scanf("%d", &employeeData[i].YearofJoining);
        printf("\n");
    }
    system("cls");
    printf("Enter Current Year: ");
    scanf("%d",&currentYear);

    printf("Employee with tenure 3 or more \n");
    for(int i=0;i<2;i++){
        int tenure = currentYear - employeeData[i].YearofJoining;
        if(tenure >= 3){
            printf("Name: %s \n",employeeData[i].name);
            printf("Year of Joining: %d \n",employeeData[i].YearofJoining);
            printf("\n");
        }
    }
    return 0;
}
/*Task 2:
*/
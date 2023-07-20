#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DUET Grading System
    // MArks Input dena h wo Program marks ko dekh kr Humara grade or CGPA dekhae
    int Marks;
    printf("\t\t\tPlease Enter Your PF MARKS And CHECK CGPA");
    scanf("%d", &Marks);
    printf("\t\t\tYour PF MARKS is: %d", Marks);
    if (Marks >= 85)
    {
        if (Marks > 100)
        {
            printf("\t\t You Are Robot? \n Please Enter Correct Marks");
        }
        else
        {
            printf("\t\tGrade: A+ \n\t\t\t\tCGPA:4.0");
        }
    }
    else if (Marks >= 80 && Marks <= 84)
    {
        printf("\t\tGrade: A \n\t\t\t\tCGPA:3.7");
    }
    else if (Marks >= 75 && Marks <= 79)
    {
        printf("\t\tGrade: B+ \n\t\t\t\tCGPA:3.5");
    }
    else if (Marks >= 70 && Marks <= 74)
    {
        printf("\t\tGrade: B \n\t\t\t\tCGPA:3.0");
    }
    else if (Marks >= 65 && Marks <= 69)
    {
        printf("\t\tGrade: C+ \n\t\t\t\tCGPA:2.5");
    }
    else if (Marks >= 60 && Marks <= 64)
    {
        printf("\t\tGrade: C \n\t\t\t\tCGPA:2.0");
    }
    else if (Marks >= 55 && Marks <= 59)
    {
        printf("\t\tGrade: D+ \n\t\t\t\tCGPA:1.5");
    }
    else if (Marks >= 50 && Marks <= 54)
    {
        printf("\t\tGrade: D \n\t\t\t\tCGPA:1.0");
    }
    else
    {
        if (Marks < 1)
        {
            printf("Invalid......!");
        }
        else
        {
            printf("\n\t\t\t\tFAIL!!");
        }
    }
}
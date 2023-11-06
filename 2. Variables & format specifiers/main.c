#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Task 01:
    Using scanf() and printf(),Create a program with the help of format specifiers to print your marks
    Marks of Subject 1 Grad of Subject 1
    Marks of Subject 2 Grad of Subject 2
    Marks of Subject 3 Grad of Subject 3
    ------------------------------------------------*/
    int MarksEnglish, MarksMath, MarksUrdu, Obtained, percentage;
    printf("\nMarks of English out of 100:--");
    scanf("%d", &MarksEnglish);
    printf("Marks of English %d", MarksEnglish);

    printf("\nMarks of Math out of 100:--");
    scanf("%d", &MarksMath);
    printf("\nMarks of Math %d", MarksMath);

    printf("\nMarks of Urdu out of 100:--");
    scanf("%d", &MarksUrdu);
    printf("\nMarks of Urdu %d", MarksUrdu);
    Obtained = MarksEnglish + MarksMath + MarksUrdu;
    printf("\nObtained Marks %d", Obtained);
    percentage = (Obtained * 100 / 300);
    printf("\nYour Percentage is %d \n", percentage);
    if (percentage > 50)
    {
        printf("Your Grade is A");
    }
    else
    {
        printf("Your Grade is B");
    }
    //----------------------------------------------
    // Task02: Using scanf() and printf()Create a program that has the following output: (the price should be taken as input from the user)
    // Price of one page:	4.75 Rs
    // Price of 15 pages:	71.25 Rs
    // Price after discount:	60.00 Rs

    int Price;
    int FifteenPrice, DisPrice;
    printf("Price of one page:-");

    scanf("%d", &Price);

    printf("\n Price of one page %d", Price);

    FifteenPrice = Price * 15;

    printf("\n Price of 15 page %d", FifteenPrice);

    DisPrice = FifteenPrice - 10%

    printf("\n Disc Price %d", DisPrice);

    // Task 03: Write a program that can print a table of 9
    printf("\tMultiplication Table of 9\n\n");
    printf("===================================================\n");
    int num = 9;
    int i;

    printf("Multiplication table of %d:\n", num);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    // --------------------------------------

    // Task 05: Take two integers as input from the user and swap the values.

    int num1, num2;
    int swap;

    printf("Enter First Number");
    scanf("%d", &num1);
    printf("\nEnter Second Number");
    scanf("%d", &num2);
    printf("Before Swap \n First Int %d , \n Second Int: %d", num1, num2);
    swap = num1;
    num1 = num2;
    num2 = swap;

    printf("\n After Swap \n First Int %d , \n Second Int: %d", num1, num2);

    /*Task 06: Using scanf() and Constant, create a program who takes an input which is
    radius of circle and calculate area of it. Area of Circle 𝐴 = 𝜋 𝑟2 where 𝜋 is constant (3.1415)*/
    printf("---------------Area of Circle-----------------");
    int radius, Area;
    const Pie = 3.142;
    printf("\nPlease Enter Radius");
    scanf("%d", &radius);
    Area = Pie * (radius * radius);
    printf("\nArea == %d", Area);

    // Task 07: Create a program that takes a decimal number from user and displays
    //  the whole number part and fraction part of the number separately

    float Numb;
    int whole;
    float frac;
    printf("Please Write Decimal Number");
    scanf("%f", &Numb);
    printf("\nYour Number is %f", Numb);
    whole = Numb;
    printf("\n---------Whole Number is %d", whole);
    frac = Numb - whole;
    printf("\n---------Fraction Number is %f", frac);
    return 0;
}
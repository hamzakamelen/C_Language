#include <stdio.h>

int main()
{
    //=================LAB 08====================
    /*Task 1: An electric power distribution company charges its domestic consumers as follows.
    Consumption Units	Rate of Charge
    0-200 	            Rs.0.50 per unit
    201-400	            Rs.100 plus Rs.0.65 per unit excess 200
    401-600	            Rs.230 plus Rs.0.80 per unit excess of 400.
    Write a C program that reads the customer number and power consumed and prints the amount to be paid by the customer.The program runs at least once. */

    int customerNo, powerConsumed;
    float amountToPaid;
    printf("=== Welcome ===");
    do
    {
        printf("\nEnter Your Customer Number ");
        scanf("%d", &customerNo);

        printf("Enter Power Consumed: ");
        scanf("%d", &powerConsumed);

        printf("Customer No: %d\nAmount to be paid: %d\n", customerNo, powerConsumed);
        if (powerConsumed <= 200)
        {
            amountToPaid = powerConsumed * 0.50;
        }
        else if (200 < powerConsumed <= 400)
        {
            amountToPaid = 100 + (powerConsumed - 200) * 0.65;
        }
        else if (400 < powerConsumed <= 600)
        {
            amountToPaid = 230 + (powerConsumed - 400) * 0.80;
        }
        else
        {
            amountToPaid = 0;
        }
        if (amountToPaid != 0)
        {
            printf("Customer Number: %d\n", customerNo);
            printf("Amount to be paid: Rs. %.2f\n", amountToPaid);
        }
        else
        {
            printf("Invalid power consumption.\n");
        }
        printf("============================");
    } while (1);
    return 0;
}

/*Task 2: Write a C program that allows the user to enter in 5 grades, ie, marks between 0 - 100. The program must calculate  the average mark, and state the number of marks less than 65.*/
int i = 1, marksofSubject[i], total, fail = 0;
float avg;
printf("Enter 5 Subject Marks (0-100)");
printf("\nYou will Fail if you got Less than 65 Marks:");

do
{
    printf("\nEnter %d Subject Marks: ", i);
    scanf("%d", &marksofSubject[i]);
    if (marksofSubject[i] > 100)
    {
        printf("Please Enter Valid Marks");
        break;
    }
    total += marksofSubject[i];

    if (marksofSubject[i] < 65)
    {
        fail++;
    }
    i++;
} while (i <= 5);

if (fail == 0)
{
    printf("\nCongratulations You Passed All Subjects ");
}
else
{
    printf("\nOh! Failed in %d Subjects ", fail);
}
avg = total / 5;
printf("\nYour Total Marks is %d", total);
printf("\nYour Average is %.2f ", avg);

/*Task 3:Write a program that will generate even numbers and calculate sum and average of those numbers.*/
int sum, i = 1;
float avg;
do
{
    if (i % 2 == 0)
    {
        printf("Even Number %d\n", i);
        sum += i;
    }
    i++;
} while (i <= 300);
avg = sum / i;
printf("Sum: %d\n", sum);
printf("Average: %f", avg);
printf("\n");

/*Task 4: Using do while loop, program to show a below multiplication table:

    1	2	3	4	5	6	7	8	9
    2	4	6	8	10	12	14	16	18
    3	6	9	12	15	18	21	24	27
    4	8	12	16	20	24	28	32	36
    5	10	15	20	25	30	35	40	45
    6	12	18	24	30	36	42	48	54
    7	14	21	28	35	42	49	56	63
    8	16	24	32	40	48	56	64	72
    9	18	27	36	45	54	63	72	81 */

printf("Mutiplication Table\n");
int row = 1, col;
do
{
    col = 1;
    do
    {
        printf("%d\t", row * col);
        col++;
    } while (col <= 9);
    printf("\n");
    row++;
} while (row <= 9);

/*Task 5: Write a program that will generate years from 1950 to 2015 and mention if the year is leap year. */
/*Notes:
A year that is divisible by 4 is a leap year.
However, years divisible by 100 are not leap years, unless...
The year is also divisible by 400, in which case it is a leap year.*/
int year = 1950;
do
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is a Leap Year\n", year);
    }
    year++;
} while (i <= 2015);

/*Task 6: Write a program to output a table of values of the integers starting at 1 and their squares. Label the table at the top of the columns. For example, your output might look like this:

                       Number	Square
                       1	     1
                       2	     4
                       3	     9
                       4	    16*/
int i = 1;
do
{
    printf("Number: %d\nSquare: %d\n ---------------\n", i, i * i);
    i++;
} while (i <= 50);

/*Task 7: Write a program to print all Prime numbers between 1 to 500.
A Prime Number can be divided evenly only by 1, or itself. And it must be a whole number greater than 1.
Example:
5 can only be divided evenly by 1 or 5, so it is a prime number. */

// From For Loop
int count, i, n;
for (n = 1; n <= 500; n++)
{
    count = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("%d is a Prime Number\n", n);
    }
}
// From While loop
int count, n, i;
n = 1;
while (n <= 500)
{
    i = 1;
    count = 0;
    while (i <= n)
    {
        if (n % i == 0)
        {
            count++;
        }
        i++;
    }
    if (count == 2)
    {
        printf("%d is Prime number\n", n);
    }
    n++;
}
// From Do While
int count, n, i;
n = 1;
do
{
    i = 1;
    count = 0;
    do
    {
        if (n % i == 0)
        {
            count++;
        }
        i++;
    } while (i <= n);
    if (count == 2)
    {
        printf("%d is a prime Number\n", n);
    }
    n++;
} while (n <= 500);
// --------------------------
/*Task 8: Write a program to enter any number and calculate its factorial using do-while.*/
int factorial, i = 1;
printf("Please Enter a Factorial Number ");
scanf("%d", &factorial);
int given = factorial;
do
{
    factorial *= i;
    i++;
} while (i <= given);
printf("Factorial of %d is %d", given, factorial);

/*Task 9: Write a C program to enter any number from user and find the reverse of number, the program executes once and if user wants to repeat the program he will press Y.
Example:
Input:1234
Output:4321*/
// From For loop
int num, r;
printf("Please Enter Number ");
scanf("%d", &num);
for (; num > 0;)
{
    r = num % 10;
    printf("%d", r);
    num /= 10;
}
// From While Loop
int num, r;
printf("Please Enter Number ");
scanf("%d", &num);
while (num > 0)
{
    r = num % 10;
    printf("%d", r);
    num /= 10;
}
// From Do While Loop
int num, r;
printf("Please Enter Number ");
scanf("%d", &num);
do
{
    r = num % 10;
    printf("%d", r);
    num /= 10;
} while (num > 0);
//--------------------
/*Task 10:
Write a do while loop which will produce the following output.
1
22
333
4444
55555*/
int num = 1;
int count = 1;

do
{
    int i = 1;

    do
    {
        printf("%d", num);
        i++;
    } while (i <= count);

    printf("\n");
    num++;
    count++;
} while (num <= 5);

#include <stdio.h>

int main()
{
    //=================LAB 07===============
    /*Task 01: Write a C Program to print half pyramid as using numbers as shown in figure below.
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5 */
    // From For Loop
    int rows, i, j;
    printf("Enter Rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    // From While Loop
    int rows, i, j;
    printf("Enter Rows: ");
    scanf("%d", &rows);
    i = 1;
    while (i <= rows)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d ", j);
            j++;
        }
        i++;
        printf("\n");
    }
    // From Do While Loop
    int rows, i, j;
    printf("Enter Rows: ");
    scanf("%d", &rows);
    i = 1;
    do
    {
        j = 1;
        do
        {
            printf("%d ", j);
            j++;
        } while (j <= i);
        i++;
        printf("\n");
    } while (i <= rows);
    /*Task 02: Write a C program to print square star (*) pattern series of n rows Forexample if n=5 the star pattern should be printed like:
    *****
    *****
    *****
    *****
    ******/
    // From For Loop
    int rows, i, j;
    printf("Enter Rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    // From While Loop
    int rows, i, j;
    printf("Enter Rows: ");
    scanf("%d", &rows);
    i = 1;
    while (i <= rows)
    {
        j = 1;
        while (j <= rows)
        {
            printf("* ");
            j++;
        }
        i++;
        printf("\n");
    }
    // From Do While Loop
    int rows, i, j;
    printf("Enter Rows: ");
    scanf("%d", &rows);
    i = 1;
    do
    {
        j = 1;
        do
        {
            printf("*");
            j++;
        } while (j <= rows);
        i++;
        printf("\n");
    } while (i <= rows);

    // Task 3: Write a C program to print Fibonacci series up to n terms.
    // From For Loop
    int n, first = 0, second = 1, next, i;
    printf("No of Terms: ");
    scanf("%d", &n);
    printf("%d, %d, ", first, second);
    // i=3 bcz first two terms written Already
    for (i = 3; i <= n; i++)
    {
        next = first + second;
        printf("%d, ", next);
        first = second;
        second = next;
    }
    // From While Loop
    int n, first = 0, second = 1, next, i;
    printf("No of Terms: ");
    scanf("%d", &n);
    printf("%d, %d, ", first, second);
    i = 3; // bcz first two terms written Already
    while (i <= n)
    {
        next = first + second;
        printf("%d,", next);
        first = second;
        second = next;
        i++;
    }
    // From Do While Loop
    int n, first = 0, second = 1, next, i;
    printf("No of Terms: ");
    scanf("%d", &n);
    printf("%d, %d, ", first, second);
    i = 3; // bcz first two terms written Already
    do
    {
        next = first + second;
        printf("%d,", next);
        first = second;
        second = next;
        i++;
    } while (i <= n);
    /*Task 4:
    Use for-loop to print the multiplication table below:

    1	2	3	4	5	6	7	8	9
    2	4	6	8	10	12	14	16	18
    3	6	9	12	15	18	21	24	27
    4	8	12	16	20	24	28	32	36
    5	10	15	20	25	30	35	40	45
    6	12	18	24	30	36	42	48	54
    7	14	21	28	35	42	49	56	63
    8	16	24	32	40	48	56	64	72
    9	18	27	36	45	54	63	72	81*/

    // From For Loop
    int rows = 9, cols = 9, i, j;
    printf("Multiplication Table: \n");
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    // From While Loop
    int rows = 9, cols = 9, i, j;
    printf("Multiplication Table: \n");
    i = 1;
    while (i <= rows)
    {
        j = 1;
        while (j <= cols)
        {
            printf("%d\t", i * j);
            j++;
        }
        i++;
        printf("\n");
    }

    // From Do While Loop
    int rows = 9, cols = 9, i, j;
    printf("Multiplication Table: \n");
    i = 1;
    do
    {
        j = 1;
        do
        {
            printf("%d\t", i * j);
            j++;
        } while (j <= cols);
        i++;
        printf("\n");
    } while (i <= rows);
    // Task 06: Write a program to print the table till 10 input taken from user
    //======From For Loop======
    int table, num, answer;
    printf("Table of ");
    scanf("%d", &table);
    for (num = 1; num <= 10; num++)
    {
        answer = table * num;
        printf("\n %d x %d = %d", table, num, answer);
    }

    //======From While Loop======
    int i = 1, table, answer;
    printf("Table of ");
    scanf("%d", &table);
    while (i <= 10)
    {
        answer = table * i;
        printf("\n%d x %d = %d", table, i, answer);
        i++;
    }

    //======From Do While Loop======
    int i = 1, table, answer;
    printf("Table of ");
    scanf("%d", &table);
    do
    {
        answer = table * i;
        printf("\n%d x %d = %d", table, i, answer);
        i++;
    } while (i <= 10);
    //--------------------------------
    return 0;
}
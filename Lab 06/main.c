#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Task 01: Write a program to print the table till 10 input taken from user
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

    // Task 02: Write a program that prints the square of the integer taken as input,until the square is less then 1000
    //======From For Loop======
    int squareinp, i;

    printf("print the number which you want to square till 1000: ");
    scanf("%d", &squareinp);
    for (i = 1; squareinp <= 1000; i++)
    {
        squareinp = squareinp * squareinp;
        if (squareinp >= 1000)
        {
            break;
        }
        printf("\n %d Square is %d", i, squareinp);
    }
    //======From While Loop======
    int num;
    printf("Enter a Number ");
    scanf("%d", &num);
    while (num <= 1000)
    {
        num = num * num;
        if (num >= 1000)
        {
            break;
        }
        printf("\n%d", num);
    }

    //======From Do While loop======
    int num;
    printf("Please Enter Number");
    scanf("%d", &num);
    do
    {
        num *= num;
        if (num >= 1000)
        {
            break;
        }
        printf("\n%d", num);
    } while (num <= 1000);
    //--------------------------------

    // Task 04" Write a program that take character input terminate when x is pressed

    //======From For Loop======
    char userInput;
    int i;
    printf("Lets Begin the Game\n Note:(If you type x or X program terminate)\n ");
    for (i = 1; i <= 10; i++)
    {
        printf("Please Enter Any Character: ");
        scanf(" %c", &userInput);
        if (userInput == 'x' || userInput == 'X')
        {
            break;
        }
    }
    //======From While loop======
    char Alphabet;
    while (Alphabet != 'x')
    {
        printf("Please Enter Alphabet");
        scanf(" %c", &Alphabet);
        if (Alphabet == 'x' || Alphabet == 'X')
        {
            break;
        }
        printf("\n Your Alphabet is  %c", Alphabet);
    }

    //======From Do While loop======
    char Alphabet;
    do
    {
        printf("\nPlease Enter Alphabet ");
        scanf(" %c", &Alphabet);
        if (Alphabet == 'x' || Alphabet == 'X')
        {
            break;
        }
        printf("\nYour Alphabet is %c", Alphabet);
    } while (Alphabet != 'x');
    //---------------------

    // Task 05: Write a program that character input unless Enter is pressed and print total no of inputs
    //======From For Loop======
    char userInput;
    int count = 0;
    for (;;)
    {
        printf("\nWrite any Character: ");
        userInput = getchar();
        if (userInput == '\n')
        {
            break;
        }
        count++;
    }
    printf("Your Counting is %d", count);
    //======From While Loop======
    char ch;
    int count = 0;
    printf("\nPlease Enter Character ");
    while (ch != '\n')
    {
        ch = getchar();
        if (ch == '\n')
        {
            break;
        }
        count++;
    }
    printf("Your Count is %d", count);

    //======From Do While Loop======
    char ch;
    int count = 0;
    printf("\nPlease Enter Character ");
    do
    {
        ch = getchar();
        if (ch == '\n')
        {
            break;
        }
        count++;
    } while (ch != '\n');
    printf("Your Count is %d", count);
    //------------------

    // Task:05 Write a Series of first 50 odd and even numbers
    //======From For Loop======
    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("\nThis number is even %d", i);
        }
        else
        {
            printf("\nThis number is odd %d", i);
        }
    }
    //======From While Loop======
    int i = 1;
    while (i != 50)
    {
        if (i % 2 == 0)
        {
            printf("\nThis number is even %d", i);
            i++;
        }
        else
        {
            printf("\nThis number is odd %d", i);
            i++;
        }
    }
    //======Do While Loop======
    int i = 1;
    do
    {
        if (i % 2 == 0)
        {
            printf("\nThis number is even %d", i);
            i++;
        }
        else
        {
            printf("\nThis number is odd %d", i);
            i++;
        }
    } while (i != 50);
    //------------------

    /*Task 06(1): Print the following series:
    1.	1,2,3,...30*/
    //======From For Loop======
    int i;
    for (i = 1; i <= 30; i++)
    {
        printf("\n%d", i);
    }
    //======From While Loop======
    int i = 1;
    while (i <= 30)
    {
        printf("\n%d", i);
        i++;
    }
    //======Do While Loop======
    int i = 1;
    do
    {
        printf("\n%d", i);
        i++;
    } while (i <= 30);
    //------------------

    // Task06(2): Print the following series:
    // 2.  1,2,2,3,3,4,4,5,...50

    //======From For Loop======
    int i = 1;
    printf("%d,", i);
    i++;
    for (i; i <= 50; i++)
    {
        printf("%d,", i);
        printf("%d,", i);
    }
    //======From While Loop======
    int i = 1;
    printf("%d", i);
    i++;
    while (i <= 50)
    {
        printf("\n%d", i);
        printf("\n%d", i);
        i++;
    }
    //======Do While Loop======
    int i = 1;
    printf("%d", i);
    i++;
    do
    {
        printf("\n%d", i);
        printf("\n%d", i);
        i++;
    } while (i <= 50);

    // Task06(3): Print the following series: Fibonacci series
    // 3.	0,1,1,2,3,5,8,...100

    // From For Loop
    int n, first = 0, second = 1, next, i;
    printf("No of Terms: ");
    scanf("%d", &n);
    printf("%d, %d, ", first, second);
    // i=3 bcz first two terms written Already
    for (i = 3; i <= n; i++)
    {
        next = first + second;
        if (next <= 100)
        {
            break;
        }
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
        if (next <= 100)
        {
            break;
        }
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
        if (next <= 100)
        {
            break;
        }
        printf("%d,", next);
        first = second;
        second = next;
        i++;
    } while (i <= n);
    return 0;
}
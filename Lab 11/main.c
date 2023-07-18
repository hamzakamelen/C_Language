/*Task 1:   Write a function to calculate the factorial value of any
integer entered through the keyboard*/
#include <stdio.h>
#include <stdlib.h>
int facto(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * facto(n - 1);
    }
}
int main()
{
    int n, fact;
    printf("Please Enter Factorial no: ");
    scanf("%d", &n);
    fact = facto(n);
    printf("Factorial of %d is %d", n, fact);
    return 0;
}
//--------------------------------------------------------------------------------------
/*Task 2: Write a function power (a, b) to calculate the value of ‘a’ raised
to the power of ‘b’.*/
#include <stdio.h>
#include <stdlib.h>

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b == 1)
    {
        return a;
    }
    else
    {
        return a * power(a, b - 1);
    }
}

int main()
{
    int a, b;
    printf("Enter the base: ");
    scanf("%d", &a);
    printf("Enter the exponent: ");
    scanf("%d", &b);
    int value = power(a, b);
    printf("The value of %d raised to the power of %d is %d\n", a, b, value);
    return 0;
}
//---------------------------------------------------------------------------------------
/*Task 3:Write a general-purpose function to convert any given year into its roman equivalent. The following table shows the roman equivalents of decimal numbers:
Decimal          Roman
1                   i
100                 c
5                   v
500                 d
10                  x
1000                m
50                  l
https://www.youtube.com/watch?v=oocEj-8u4o8&t=21s
Example:
Roman equivalent of 1988 is mdcccclxxxviii
Roman equivalent of 1525 is mdxxv */
#include <stdio.h>
#include <stdlib.h>

void convertRoman(int Convertyear)
{
    while (Convertyear)
    {
        if (Convertyear >= 1000)
        {
            printf("M");
            Convertyear = Convertyear - 1000;
        }
        else if (Convertyear >= 500)
        {
            printf("D");
            Convertyear = Convertyear - 500;
        }
        else if (Convertyear >= 100)
        {
            printf("C");
            Convertyear = Convertyear - 100;
        }
        else if (Convertyear >= 50)
        {
            printf("L");
            Convertyear = Convertyear - 50;
        }
        else if (Convertyear >= 10)
        {
            printf("X");
            Convertyear = Convertyear - 10;
        }
        else if (Convertyear >= 5)
        {
            printf("V");
            Convertyear = Convertyear - 50;
        }
        else if (Convertyear >= 1)
        {
            printf("I");
            Convertyear = Convertyear - 1;
        }
    }
}
int main()
{
    int year;
    printf("Convert Year into Roman");
    // Taking Year from User
    printf("Please Enter a Year ");
    scanf("%d", &year);
    convertRoman(year);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    /*Task 1:
    Write a program that accepts one string and then find the length of that string and print it.*/

    char name[20];
    int length;
    printf("Please Enter Your Name: ");
    gets(name);
    printf("\nYour Name is ");
    puts(name);

    // Checking Length & Print Length
    length = strlen(name);
    printf("%d", length);

    //--------------------------------------------------------------------------------------

    /*Task 2:
    Write a program that takes input in a string (char array) and ‘find’ a particular character
    and ‘replace’ that character. The program should replace all the occurrences of that
    particular character with the new character.
    For example:
    Array: “I love programming” find character: ‘m’
    replace with character: ‘n’
    then the string should become “I love progranning”*/
    char name[20];
    char old;
    char replace;
    printf("Please Enter Your Name: ");
    gets(name);
    printf("\nYour Name is ");
    puts(name);

    printf("What you want to replace? ");
    scanf("%c", &old);
    printf("Replace With? ");
    scanf("%c", &replace);
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] == old)
        {
            name[i] = replace;
        }
    }
    puts(name);
    //--------------------------------------------------------------------------------------

    /*Task 3:
    Fifteen numbers are entered from the keyboard into an array with 3 rows and 5 columns. The
    number to be searched is entered through the keyboard by the user. Write a program to find
    if the number to be searched is present in the array and if it is present, display the
    number of times it appears in the array.*/
    int arr[3][5];
    int i, j, value, count = 0;
    // Taking Value from User
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Enter the number at array[%d][%d] ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    // Search value
    printf("Please Enter number to be searched: ");
    scanf("%d", &value);
    // Count Search Value
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (arr[i][j] == value)
            {
                count++;
            }
        }
    }
    printf("The number %d appeared %d times in Array ", value, count);
    //--------------------------------------------------------------------------------------

    /*Task 4:
    Write a program to pick up the largest number and sum of all the integers from any 5 x 5
    matrix.*/
    int matrix[5][5], i, j;
    int largest = 0, sum = 0;
    // Taking Value from User
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Enter the number at matrix[%d][%d] ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    // Largest Number
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (matrix[i][j] > largest)
            {
                largest = matrix[i][j];
            }
        }
    }
    // Sum of Numbers
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            sum += matrix[i][j];
        }
    }
    printf("\nLargest Number %d", largest);
    printf("\nSum %d", sum);
    //--------------------------------------------------------------------------------------

    /*Task 5:
    Write a program to obtain transpose of a 4x4 matrix. The transpose of a matrix is obtained
    by exchanging the elements of each row with the elements of the corresponding column*/
    int matrix[4][4];
    int transpose[4][4];
    int i, j;
    // Taking Value from User
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter the number at matrix[%d][%d] ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    // Transpose of a Matrix
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    // Print Orignal Matrix
    printf("------Orignal Matrix-----\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("  %d", matrix[i][j]);
        }
        printf("\n");
    }
    // Print Transpose of a Matrix
    printf("------Transpose of a Matrix-----\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("  %d", transpose[i][j]);
        }
        printf("\n");
    }
    //--------------------------------------------------------------------------------------

    /*Task 6:
    Write a program to add two 6 x 6 matrices. Add result in third array and print this array.*/
    int result[6][6],i,j;
    int firstMatrix[6][6] = {
        {1, 2, 3, 4, 5, 6},
        {2, 4, 6, 8, 9, 10},
        {3, 6, 9, 12, 15, 16},
        {4, 8, 12, 16, 19, 21},
        {5, 10, 15, 20, 25, 30},
        {2, 1, 3, 4, 5, 6}
    };
    int secondMatrix[6][6] = {
        {1, 2, 3, 4, 5, 6},
        {2, 3, 6, 8, 9, 1},
        {3, 4, 9, 2, 5, 6},
        {4, 5, 1, 6, 9, 1},
        {5, 6, 5, 0, 5, 0},
        {6, 7, 3, 4, 5, 6}
    };
    // Addition of two matrices
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            result[i][j]=firstMatrix[i][j]+secondMatrix[i][j];
        }
    }
    // Print Addition
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
           printf("%d",result[i][j]);
        }
        printf("\n");
    }
    //--------------------------------------------------------------------------------------

    /*Task 7:
    Write a program to multiply any two 3 x 3 matrices. Add result in third array and print
    this array.*/
    int result[3][3],i,j;
    int firstMatrix[3][3] = {
        {1, 2, 3},
        {2, 4, 6},
        {3, 6, 9}
    };
    int secondMatrix[3][3] = {
        {1, 2, 3},
        {2, 3, 6},
        {3, 4, 9}
    };
    // Multiplication of two matrices
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
              result[i][j]=0;
            for(int k=0;k<3;k++){
                result[i][j] += firstMatrix[i][k]*secondMatrix[k][j];
            }
        }
    }
    // Print Multiplication
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           printf("%d",result[i][j]);
        }
        printf("\n");
    }

    //--------------------------------------------------------------------------------------

    /*Task 8:
    In a bitmap file black is represented by 1 and white by 0. Create a 8X8 pattern and 
    initialize using following data: 
    1 1 1 0 0 1 1 1
    1 0 0 0 0 0 1 0
    1 1 1 1 1 1 0 0
    1 1 1 0 0 0 1 0
    1 0 1 0 1 0 1 0
    0 0 0 0 0 0 0 0
    1 1 1 1 1 1 1 1
    0 0 0 0 1 1 1 1 */
    int bitmapPattern[8][8]={
        {1,1,1,0,0,1,1,1},
        {1,0,0,0,0,0,1,0},
        {1,1,1,1,1,1,0,0},
        {1,1,1,0,0,0,1,0},
        {1,0,1,0,1,0,1,0},
        {0,0,0,0,0,0,0,0},
        {1,1,1,1,1,1,1,1},
        {0,0,0,0,1,1,1,1}
    };
    int i,j;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            printf("%d  ",bitmapPattern[i][j]);
        }
        printf("\n");
    }
    
    //--------------------------------------------------------------------------------------
    return 0;
}
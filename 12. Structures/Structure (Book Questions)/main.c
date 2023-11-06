#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Define a structure consisting of two floating-point members, called real & imaginary.Include the tag complex within the definition
    struct complex
    {
        float real;
        float imaginary;
    };

    // Declare the variable x1,x2,x3 to be structures of type complex as describe in the program

    struct complex x1, x2, x3;
    x2.real = 20.5;
    printf("%f", x2.real);

    // Combine Upper Both Question

    struct complex
    {
        float real;
        float imaginary;
    } x1, x2, x3;

    // Declare a structure variable x and assign a value 1.3 , -2.2 in real& imaginary

    struct complex x;
    x.real = 1.3;
    x.imaginary = -2.2;
    printf("%f,%f", x.real, x.imaginary);

    // Declare a one dimensional 100 element array called cx whose elements are structure of type complex,
    struct complex cx[100];

    // Combine the structure definition and the array declaration
    struct complex
    {
        float real;
        float imaginary;
    } cx[100];

    /*Define a structure that contains the following three members
    --> an int called won
    --> an int called lost
    --> an float called percentage
    Include the user-defined data type record within the definition
    */

    struct record
    {
        int won;
        int lost;
        float percentage;
    };

    /*Define a structure that contain the following two members
    --> a 40-element character called name
    --> a structure name stats,of type record
    Include the user-defined data type team within the definition */

    struct team
    {
        char name[40];
        struct record stats;
    };

    /*Declare a t to be a structure variable of type team as
    in the previous problem Write a expression of each member & submember of t .*/
    struct record
    {
        int won;
        int lost;
        float percentage;
    };
    struct team
    {
        char name[40];
        struct record stats;
    } t;
    t.stats.won = 2;
    printf("%d", t.stats.won);

    /*Declare a t to be a structure variable of type team as in the
    previous problem.Initialize t as follows:
    name: Chichago Bears
    won:14
    lost:2
    percentage:87.5
    */

    struct record
    {
        int won;
        int lost;
        float percentage;
    };
    struct team
    {
        char name[40];
        struct record stats;
    } t;
    t.name = "Hamza Kamelen";
    t.stats.won = 14;
    t.stats.lost = 2;
    t.stats.percentage = 87.5;

    return 0;
}
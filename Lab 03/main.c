#include <stdio.h>
#include <stdlib.h>

int main(){
    //------------------------TASK-01--------------------*

printf("------------SUBJECT MARKSHEET----------");
int English,Urdu,Math,Islamiat,Computer;
printf("\nPlease Enter English Marks");
scanf("\n %d",&English);
printf("\nPlease Enter Urdu Marks");
scanf("\n %d",&Urdu);
printf("\nPlease Enter Math Marks");
scanf("\n %d",&Math);
printf("\nPlease Enter Islamiat Marks");
scanf("\n %d",&Islamiat);
printf("\nPlease Enter Computer Marks");
scanf("\n %d",&Computer);
int total = 500;
int Obtained = English+Urdu+Math+Islamiat+Computer;
float percentage = Obtained *100/total;
printf("\n\tEnglish: %d \n\tUrdu: %d \n\tMath: %d \n\tIslamiat: %d  \n\tComputer: %d \n\n\t Obtained: %d \n\n\t Total: %d \n\n\t Percentage: %f"
       ,English,Urdu,Math,Islamiat,Computer,Obtained,total,percentage);

}
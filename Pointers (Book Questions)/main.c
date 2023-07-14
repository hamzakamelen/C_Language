#include <stdio.h>
#include <stdlib.h>

/*Q1: Write a function that recieve 5 integer & returns the sum,avg & standard deviation of these numbers.Call
this function from main() and print the result in main()*/

void Values(int numbers[5],int size,int *sum,float *avg,float *var,float *std){
    *sum=0;
    for(int i=0;i<size;i++){
        *sum+= numbers[i];
    }
    *avg = *sum/size;
    for(int i=0;i<size;i++){
        *var += ((numbers[i]-*avg)*(numbers[i]-*avg));
    }
    *var = *var/size;
    *std = sqrt(*var);
}
int main(){
    int numbers[5];
    int sum;
    float avg;
    float var;
    float std;
    for(int i=0;i<5;i++){
        printf("Please Write %d Number ",i+1);
        scanf("%d",&numbers[i]);
    }
    Values(numbers,5,&sum,&avg,&var,&std);
    printf("\nSum: %d",sum);
    printf("\nAverage: %.2f",avg);
    printf("\nStandard Deviation: %.2f",std);

return 0;
}
/*Q2:Write a function that recieve marks recieved by a student in 3 subjects & returns the percentage,avg of these numbers.
Call this function from main() and print the result in main()*/
void DateSheet(int *marks,int size,int *total,float *avg,float *perc){
    *total=0;
    for(int i=0;i<size;i++){
        *total += marks[i];
    }
    *avg = *total/size;
    *perc = (*total *100)/(size*100);

}
int main(){
    int marks[3];
    int total=0;
    float avg=0;
    float perc;
    marks[3]=0;
    for(int i=0;i<3;i++){
        printf("Marks of %d Subject ",i+1);
        scanf("%d",&marks[i]);
    }
    DateSheet(marks,3,&total,&avg,&perc);
    printf("\nObtained Marks: %d",total);
    printf("\nAverage: %.2f",avg);
    printf("\nPercentage: %.2f",perc);

return 0;
}
/*Given three variable x,y,z write a function to circularly shift their values to right. In other words if x=5,
y=8,z=10 after circular shift y=5, z=8, x=10. Call the function with variable a,b,c to circular shift values*/
void CircularShift(int *x,int *y,int *z){
int temp = *x;
*x =*z;
*z =*y;
*y = temp;
}
int main(){
    int x=5,y=8,z=10;
    CircularShift(&x,&y,&z);
    printf("%d %d %d",x,y,z);
return 0;
}


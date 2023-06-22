#include <stdio.h>
#include <stdlib.h>

int main()
{
//=====LAB 09=========
//Task 01: Write a program that will inert 10 int in array and print in new lines
int arr[10],i;
printf("Please Enter 10 Numbers \n");
for(i=0;i<10;i++){
    scanf("\n%d",&arr[i]);
    printf("\nvalue %d: %d\n",i+1,arr[i]);
}

//Task 2: Write a program that will ask user to input index number from where to delete a number from array
 int arr[5],delete;
    printf("You have to input 5 values for array\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array created successful");
    printf("\nPlease Enter which index do you want to delete");
    scanf("%d",&delete);
    arr[delete]=0;
    for(int h=0;h<5;h++){
        printf("%d",arr[h]);
    }

// Task 3: Write a program that will find largest and smallest number
int a[5]={1,2,5,9,3};
int min,max;
min=a[1];
max=a[1];
for(int i=0;i<5;i++){
    if(min>a[i]){
        min=a[i];
    }
    if(max<a[i]){
        max=a[i];
    }
}
 printf ("Minimum %d",min);
 printf("Maximum %d",max);

//Task 4: Take 10 numbers from user in an array calculate the sum avg of those num
int arr[10],sum=0,i,avg;
printf("Please Enter 10 Numbers \n");
for(i=0;i<10;i++){
    scanf("\n%d",&arr[i]);
    sum +=arr[i];
}
avg=sum/i;
printf("Average: %d\nSum: %d",avg,sum);

/*Write a program to create two character arrays of same length and
copy the content of one array into another in reverse order.*/
char First[5]={'H','A','M','Z','A'};
char second[5];
int i,j=0,k;
for(i=4;i>=0;i--){
 printf(" %c",First[i]);
second[j]=First[i];
j++;
}
printf("\n");
for(k=0;k<5;k++){
    printf(" %c",second[k]);
}
// Bubble Sorting
//Ascending

int arr[5]={22,9,3,5,8};
int temp,i,n;
for(i=0;i<5;i++){
    for(n=0;n<5;n++){
        if(arr[n]<arr[n+1]){
            temp=arr[n];
            arr[n]=arr[n+1];
            arr[n+1]=temp;
        }
    }
}
int h;
for(h=0;h<5;h++){
    printf("\n%d",arr[h]);
}

// Bubble Sorting
//Descending

int arr[5]={22,9,3,5,8};
int temp,i,n;
for(i=0;i<5;i++){
    for(n=0;n<5;n++){
        if(arr[n]>arr[n+1]){
            temp=arr[n];
            arr[n]=arr[n+1];
            arr[n+1]=temp;
        }
    }
}
int h;
for(h=0;h<5;h++){
    printf("\n%d",arr[h]);
}

    return 0;
}
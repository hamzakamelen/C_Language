#include <stdio.h>
#include <string.h>
int main()
{
    //---------------Transpose of a Matrix------------------
    // int matrix[2][2] = {
    //     {2, 1},
    //     {4, 1}};
    // int trans[2][2];
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         trans[j][i] = matrix[i][j];
    //     }
    // }

    // // Print
    // printf("------Transpose of a Matrix-----\n");
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("%d  ",trans[i][j]);
    //     }
    //     printf("\n");
    // }

    //------------------Addition of a Matrix------------------
    // int matrix1[2][2] = {
    //     {1, 2},
    //     {3, 4}};
    // int matrix2[2][2] = {
    //     {5, 6},
    //     {7, 8}};
    // int result[2][2];
    // // Addition
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         result[i][j] = matrix1[i][j] + matrix2[i][j];
    //     }
    // }
    // // Print Result
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("%d ",result[i][j]);
    //     }
    //     printf("\n");
    // }

    //------------------ Multiplication of two Matrix------------------
    // int matrix1[2][2]={
    //     {1,4},
    //     {3,6}
    // };
    // int matrix2[2][2]={
    //     {2,6},
    //     {1,6}
    // };
    // int result[2][2];
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         result[i][j]=0;
    //         for(int k=0;k<2;k++){
    //             result[i][j] += matrix1[i][j]*matrix2[i][j];
    //         }
    //     }
    // }
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         printf("%d ",result[i][j]);
    //     }
    //     printf("\n");
    // }

    //--------------Bubble Sorting(Ascending)---------------
    // int arr[5] = {1, 5, 3, 4, 2};
    // int temp =0;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if(arr[j]>arr[j+1]){
    //             temp=arr[j+1];
    //             arr[j+1] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    // for(int i=1;i<=5;i++){
    //     printf("%d ",arr[i]);
    // }

    //--------------Bubble Sorting(Decending)---------------
    // int arr[5] = {1, 5, 3, 4, 2};
    // int temp = 0;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (arr[j] < arr[j + 1])
    //         {
    //             temp = arr[j + 1];
    //             arr[j + 1] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    //-------------------Array Delete------------------------
    // int arr[5], dltind;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\nPlease Enter %d Value ", i + 1);
    //     scanf("%d", &arr[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("Please Enter a index(1-5) which you want to delete ");
    // scanf("%d", &dltind);
    // if (dltind <= 0 || dltind > 5)
    // {
    //     printf("Please Enter a Valid index (1-5)");
    // }
    // else
    // {
    //     for (int i = dltind - 1; i < 4; i++)
    //     {
    //         arr[i] = arr[i + 1];
    //     }
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    //-----------------Array Reverse-------------------
    // char Name[5]={'H','A','M','Z','A'};
    // char RevName[5];
    // int j=0,k;
    // for(int i=5;i>=0;i--){
    //     RevName[j] = Name[i];
    //     j++;
    // }

    // for(k=0;k<6;k++){
    //     printf("%c",RevName[k]);
    // }

    //-----------------Prime Numbers-------------------
    // int n, count;
    // for (n = 1; n <= 1000; n++)
    // {
    //     count = 0;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         if (n % i == 0)
    //         {
    //             count++;
    //         }
    //     }
    //     if (count == 2)
    //     {
    //         printf("%d is a Prime Number\n", n);
    //     }
    // }

    //--------------------Convert Year into Roman---------------------
    // int year;
    // printf("Enter a Year ");
    // scanf("%d",&year);
    // void CurrentYear(int YearConvert){
    //     while(YearConvert){
    //         if(YearConvert >=1000){
    //             printf("M");
    //             YearConvert = YearConvert-1000;
    //         }else if(YearConvert>=500){
    //             printf("D");
    //             YearConvert = YearConvert-500;
    //         }else if(YearConvert>=100){
    //             printf("C");
    //             YearConvert = YearConvert-100;
    //         }else if(YearConvert>=50){
    //             printf("L");
    //             YearConvert = YearConvert-50;
    //         }else if(YearConvert>=10){
    //             printf("X");
    //             YearConvert = YearConvert-10;
    //         }else if(YearConvert>=5){
    //             printf("V");
    //             YearConvert = YearConvert-5;
    //         }else if(YearConvert>=1){
    //             printf("I");
    //             YearConvert = YearConvert-1;
    //         }
    //     }
    // }
    // CurrentYear(year);

    //-----------------Replace Character-------------------
    // char Name[20];
    // char replaceCh, With;
    // printf("Please Enter your Name ");
    // gets(Name);
    // system('cls');
    // printf("Enter a Character which you want to replace ");
    // scanf(" %c",&replaceCh);
    // printf("\nReplace with? ");
    // scanf(" %c",&With);
    // for(int i=0;i<strlen(Name);i++){
    //     if(Name[i]==replaceCh){
    //         Name[i] = With;
    //     }
    // }
    // // Print After Replacing
    // puts(Name);

    
    return 0;
}
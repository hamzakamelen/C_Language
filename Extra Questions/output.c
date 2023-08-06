// #include <stdio.h>
// #include <conio.h>
// int main(){
//     int arr[4][2]={{1,2},{3,4},{1,4},{3,5}};
//     int i,j;
//     printf("The 2D Array is ");
//     for(i=0;i<4;i++){
//         for(j=0;j<2;j++){
//             printf("%d",arr[i][j]);
//         printf("\n");}
//     }
//     getch();
//     return 0;
// }
//OUTPUT
/*
The 2D Array is 1
2
3
4
1
4
3
5
*/

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char str1[12]= "Hello";
//     char str2[12]= "World";
//     char str3[12];
//     int len;
//     strcpy(str3,str1);
//     printf("strcpy(str3,str1) : %s\n",str3);
//     strcat(str1,str2);
//     printf("strcat(str1,str2): %s\n",str1);
    
//     len = strlen(str1);
//     printf("strlen(str1) %d\n",len);
//     getch();
//     return 0;
// }
//OUTPUT:
// strcpy(str3,str1) : Hello
// strcat(str1,str2): HelloWorld
// strlen(str1) 10


// #include <stdio.h>
// int main(){
//     int k;
//     int j=4;
//     switch (k=j-1)
//     {
//     case 3:
//     printf("Trapped");
//     break;
//     default:
//     printf("Caught");
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    // Array:
    int arr[5];
    // 0 1 2 3 4
    // ----------------Insert and Save value in array-------------
    for(int i =0;i<5;i++){
        printf("Please Write int %d ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<5;j++){
        printf("%d value is %d\n",j+1,arr[j]);
    }

    char name[6];
       for(int i =0;i<6;i++){
        printf("Please Write %d Letter ",i+1);
        scanf(" %c",&name[i]);
    }
    for(int j=0;j<6;j++){
        printf(" %c",name[j]);
    }
    int arr[5], delete;
    printf("You have to input 5 values for array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array created successful");
    printf("\nPlease Enter which index do you want to delete");
    scanf("%d", &delete);
    arr[delete] = 0;
    for (int h = 0; h < 5; h++)
    {
        printf("%d", arr[h]);
    }


    int a[5] = {9, 2, 5, 6, 3};
    int min, max;
    min = a[0];
    max =  a[0];
    for(int i=0;i<5;i++){
        if(min>a[i]){
            min = a[i];
        }
        if(max<=a[i]){
            max=a[i];
        }
    }
    printf("Minimum %d", min);
    printf("Maximum %d", max);
    return 0;
}
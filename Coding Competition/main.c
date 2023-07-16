#include <stdlib.h>
#include  <stdio.h>
int main(){
//------ Array Delete*-----------
//declaration
int arr[5],i,deleteIndex;
for(i=0;i<5;i++){
    printf("Enter %d value of Array ",i+1);
    scanf("%d",&arr[i]);
}
printf("Array Created Successfully\nPlease Write the value which you want to delete");
scanf("%d",&deleteIndex);
// Check if the index is valid
 if (deleteIndex < 0 || deleteIndex >= 5) {
        printf("Invalid index. Please enter a valid index within 0 to %d.\n", 5 - 1);
        return 1; // Return 1 to indicate an error
    }
//delete||Rewrite value
for(i=deleteIndex;i<5;i++){
    arr[i]=arr[i+1];
}
//Print array
for(i=0;i<4;i++){
    printf("%d",arr[i]);
}

}
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

//===========String Reverse=========
#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        // Swap characters at left and right positions
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        
        // Move to the next characters
        left++;
        right--;
    }
}

int main() {
    char str[100]; // Assuming a maximum string length of 100

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the input string
    str[strcspn(str, "\n")] = '\0';

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

//======== Guessing Game =======
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts;
    srand(time(0));
    number = rand() % 100 + 1;  // Generate a random number between 1 and 100

    printf("Welcome to the Guessing Game!\n");
    printf("I have picked a number between 1 and 100.\n");

    for (attempts = 1; ; attempts++) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}
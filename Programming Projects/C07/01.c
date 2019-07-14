#include <stdio.h>

int main(void){

    float userInput, compare;
    
    while (userInput != 0){

        printf("Enter a number (0 to exit): "); scanf("%f", &userInput);

        if(userInput > compare) 
            compare = userInput;
    }
    printf("The largest number entered was: %.2f", compare);
    return 0;
}
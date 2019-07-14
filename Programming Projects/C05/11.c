//  C Programming - A Modern Approach (Second Edition)
//  by K. N. King
//  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//  Chapter 5   Selection Statements
//              PROGRAMMING PROJECTS
//              PROJECT No. 11 | p.97


/* 
    Write a program that asks the user for a two-digit number, then prints the English word for the number:

    ENTER A TWO-DIGIT NUMBER: 45
    You entered the number forty-five.

    Hint:   Break the number into two digits. Use one switch statement to print the word for the first digit
            ("twenty", "thirty", and so forth). Use a second switch statement to print the word for the second
            digit. Don't forget that the numbers between 11 and 19 require special treatment.

*/


#include <stdio.h>

int main(void){

    int userInput;

    printf("Enter a two-digit number: "); scanf("%d", &userInput);
   
    if (userInput < 10 || userInput > 99){                                                  // Check if user input is a two-digit number.
        printf("Invalid input: %d", userInput);                                                                                       
        return 1;
    }
    
    if (userInput >= 10 && userInput <= 19){                                                // Check if user input lies between 10 and 19
        switch(userInput){
            case 10: printf("You entered the number ten."); break;
            case 11: printf("You entered the number eleven."); break;
            case 12: printf("You entered the number twelve."); break;
            case 13: printf("You entered the number thirteen."); break;
            case 14: printf("You entered the number fourteen."); break;
            case 15: printf("You entered the number fifteen."); break;
            case 16: printf("You entered the number sixteen."); break;
            case 17: printf("You entered the number seventeen."); break;
            case 18: printf("You entered the number eighteen."); break;
            case 19: printf("You entered the number nineteen."); break;
            default: printf("Weird error at selection statements (10-19)."); return 1;
        }
        return 0;                                                                           // Terminate the program. No need to go on, since numbers 10 to 19 are covered.
    }

    switch(userInput / 10){                                                                 // Convert user input into the first digit: 21 -> 2
        case 2: printf("You entered the number twenty"); break;
        case 3: printf("You entered the number thirty"); break;
        case 4: printf("You entered the number fourty"); break;
        case 5: printf("You entered the number fifty"); break;
        case 6: printf("You entered the number sixty"); break;
        case 7: printf("You entered the number seventy"); break;
        case 8: printf("You entered the number eighty"); break;
        case 9: printf("You entered the number ninety"); break;
        default: break; 
    }

    switch(userInput % 10){                                                                 // Convert user input into the second digit: 21 -> 1
        case 1: printf("-one."); break;
        case 2: printf("-two."); break;
        case 3: printf("-three."); break;
        case 4: printf("-four."); break;
        case 5: printf("-five."); break;
        case 6: printf("-six."); break;
        case 7: printf("-seven."); break;
        case 8: printf("-eight."); break;
        case 9: printf("-nine."); break;
        default: break;
    }
    
    return 0;
}
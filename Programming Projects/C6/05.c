//  C Programming - A Modern Approach (Second Edition)
//  by K. N. King
//  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//  Chapter 6   Loops
//              PROGRAMMING PROJECTS
//              PROJECT No. 5 | p.123


/* 
    Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit
    number with its digits reversed. Generalize the program so that the number can have one,
    two, three or more digits.

    Hint: Use a do loop that repeatedly divides the number by 10, stopping when it reaches 0.
*/

#include <stdio.h>

int main(void)
{

    int num;

    printf("Enter an integer: "); scanf("%d", &num);
    printf("The reversal is: ");

    do{
        printf("%d", num % 10);
        num /= 10;
    }while(num != 0);
 
    return 0;
}
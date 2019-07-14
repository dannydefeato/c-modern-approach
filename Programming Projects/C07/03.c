//  C Programming - A Modern Approach (Second Edition)
//  by K. N. King
//  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//  Chapter 6   Loops
//              PROGRAMMING PROJECTS
//              PROJECT No. 3 | p.123


/* 
    Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms:

    ENTER A FRACTION: 6/12
    IN LOWEST TERMS: 1/2

        Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and denominator.
        Then divide bothe the numerator and denominator by the GCD.

    See project No. 2
*/

#include <stdio.h>

int main(void){

    int num, denom, numInput, denomInput, remainder;

    printf("Enter a fraction: "); scanf("%d /%d", &num, &denom);

    numInput = num;
    denomInput = denom;

    while (denom != 0){
        remainder = num % denom;
        num = denom;
        denom = remainder;
    }

    printf("In lowest terms: %d/%d", numInput / num, denomInput / num);



    return 0;
}
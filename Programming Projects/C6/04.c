//  C Programming - A Modern Approach (Second Edition)
//  by K. N. King
//  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//  Chapter 6   Loops
//              PROGRAMMING PROJECTS
//              PROJECT No. 4 | p.123


/* 
    Add a loop to the broker.c program of Section 5.2 so that the user can enter more than
    one trade and the program will calculate the commission each. The program should ter-
    minate when the user enters 0 as the trade value:

    ENTER VALUE OF TRADE: 30000
    COMMISSION: $166.00

    ENTER VALUE OF TRADE: 20000
    COMMISSION: $144.00

    ENTER VALUE OF TRADE: 0
*/

#include <stdio.h>

int main(void)
{
    float commission, value;

    printf("Enter value of trade (0 to terminate): ");
    scanf("%f", &value);

    while (value != 0){

        if (value < 2500.00f)
            commission = 30.00f + .017f * value;
        else if (value < 6250.00f)
            commission = 56.00f + .0066f * value;
        else if (value < 20000.00f)
            commission = 76.00f + .0034f * value;
        else if (value < 50000.00f)
            commission = 100.00f + .0022f * value;
        else if (value < 500000.00f)
            commission = 155.00f + .0011f * value;
        else
            commission = 255.00f + .0009f * value;

        if (commission < 39.00f)
            commission = 39.00f;
    
        printf("Commission: $%.2f\n", commission);

        printf("Enter value of trade (0 to terminate): ");
        scanf("%f", &value);
    }

    

    return 0;
}
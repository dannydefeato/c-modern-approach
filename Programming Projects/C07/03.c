//  C Programming - A Modern Approach (Second Edition)
//  by K. N. King
//  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//  Chapter 7   Basic Types
//              PROGRAMMING PROJECTS
//              PROJECT No. 3 | p.157


/* 
    Modify the sum2.c program of Section 7.1 to sum a series of double values.
    
*/

#include <stdio.h>

int main(void)
{
    double n, sum = 0.0f;

    printf("This program sums a series of floats.\n");
    printf("Enter integers (0 to terminate): ");
    scanf("%lf", &n);

    while (n != 0)
    {
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %lf\n", sum);

    return 0;
}
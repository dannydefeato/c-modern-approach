//  C Programming - A Modern Approach (Second Edition)
//  by K. N. King
//  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//  Chapter 7   Basic Types
//              PROGRAMMING PROJECTS
//              PROJECT No. 1 | p.157


/* 
    The square.c program of Section 6.3 will fail (usually by printing strange answers) if
    i * i exceeds the maximum int value. Run the program and determine the smallest value
    of n that causes failure. Try changing the type of i to short and running the program
    again. (Don't forget to update the conversion specifications in the call of printf!) Then
    try long. From these experiments, what can you conclude about the number of bits used to
    store integer types on your machine?
    
*/

/* Prints a table of squares using a while statement */

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("%10d%10d\n", i, i * i);
        i++;
    }

return 0;
}
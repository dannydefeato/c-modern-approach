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
    int          i;
    short       si;

    i = 46340;
    printf("\nInt:\n");
    while (i <= 46341) {
        printf("i: %8d\ti*i:%15d\n", i, i * i);
        i++;
    }

    printf("\nShort:\n");
    si = 181;
    while (si <= 182) {
        printf("si: %7hi\ti*i:%15hi\n", si, si * si);
        si++;
    }

return 0;
}

/*

The last correct numbers are: 
int:          46340 ->  2,147,395,600
              46341 -> -2,147,479,015

short:          181 ->         32,761
                182 ->        -32,412


*/

//  C Programming - A Modern Approach (Second Edition)
//  by K. N. King
//  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//  Chapter 7   Basic Types
//              PROGRAMMING PROJECTS
//              PROJECT No. 6 | p.158


/* 
    Write a program that prints the values of sizeof(int), sizeof(short),
    sizeof(long), sizeof(float), sizeof(double) and sizeof(long double).    
*/

#include <stdio.h>

int main(void){

    printf ("\nInt:\t\t%2d Bytes\n", sizeof(int));
    printf ("Short:\t\t%2d Bytes\n", sizeof(short));
    printf ("Long:\t\t%2d Bytes\n", sizeof(long));
    printf ("Float:\t\t%2d Bytes\n", sizeof(float));
    printf ("Double:\t\t%2d Bytes\n", sizeof(double));
    printf ("Long Double:\t%d Bytes\n", sizeof(long double));

    return 0;
}
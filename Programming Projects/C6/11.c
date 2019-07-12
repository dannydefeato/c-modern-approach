//  C Programming - A Modern Approach (Second Edition)
//  by K. N. King
//  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//  Chapter 6   Loops
//              PROGRAMMING PROJECTS
//              PROJECT No. 11 | p.124


/* 
    The value of the mathematical constant e can be expressed as an infinte series:
    e = 1 + 1/1! + 1/2! + 1/3! + ...
    Write a program that approximates e by computing the value of
    1 + 1/1! +1/2! + 1/3! + ... + 1/n!
    where n is an integer entered by the user.

*/

#include <stdio.h>

int main(void){

    int n;
    float f = 1.00f, e = 1.00f;

    printf("Approximation of e using e = 1/n1!+ 1/n2! + ... + 1/n!\n");
    printf("Number of iterations: "); scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        f *= i;
        e += 1/f;
    }

    printf("\nThe approximation of e (using %d steps) is: %.12f", n, e);

    return 0;
}
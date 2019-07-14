//  C Programming - A Modern Approach (Second Edition)
//  by K. N. King
//  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//  Chapter 6   Loops
//              PROGRAMMING PROJECTS
//              PROJECT No. 12 | p.124


/* 
    Modify Programming Project 11 so that the program continues adding terms until the cur-
    rent term becomes less than epsilon, where epsilon is a small (floating-point) number entered
    by the user.

*/

#include <stdio.h>

int main(void){

    //int n;
    float f = 1.00f, e = 1.00f, eps = 1.00f, t = 1.00f;

    printf("Approximation of e using e = 1/n1!+ 1/n2! + ... + 1/n!\n");
    printf("Enter limit of term (epsilon): "); scanf("%f", &eps);

    for(int i = 1;; i++)
    {
        if(t >= eps)
        {
            t = 1/(f *= i);
            e += t;
            printf("Term %3d:\t%f\n", i, t);
        }
        
        else if( t < eps)
            break;
    }

    printf("\nThe approximation of e (epsilon = %.4f) is: %.12f", eps, e);

    return 0;
}
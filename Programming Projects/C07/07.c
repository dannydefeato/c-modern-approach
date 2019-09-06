//  C Programming - A Modern Approach (Second Edition)
//  by K. N. King
//  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//  Chapter 7   Basic Types
//              PROGRAMMING PROJECTS
//              PROJECT No. 7 | p.158


/* 
    Modify Programming Project 6 from Chapter 3 so that the user may add, subtract,
    multiply or divide two fractions (by entering either +, -, * or / between the fractions).
*/

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char op;

    /* printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2); */

    printf("Enter two fractions separated by an operator (+, -, *, /): "); scanf("%d/%d%c%d/%d", &num1, &denom1, &op, &num2, &denom2);

    if (op == '+')
    {
        result_num      = num1 * denom2 + num2 * denom1;
        result_denom    = denom1 * denom2;
    }
    
    else if (op == '-')
    {
        result_num      = num1 * denom2 - num2 * denom1;
        result_denom    = denom1 * denom2;
    }

    else if (op == '*')
    {
        result_num      = num1 * num2;
        result_denom    = denom1 * denom2;
    }

    else if (op == '/')
    {
    //TODO: FIGURE OUT HOW TO COMPUTE A DIVISION USING GCD AND MODULO;
    }
    
    printf("The sum is %d/%d\n", result_num, result_denom);
   
    return 0;
}
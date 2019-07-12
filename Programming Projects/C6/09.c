//  C Programming - A Modern Approach (Second Edition)
//  by K. N. King
//  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//  Chapter 6   Loops
//              PROGRAMMING PROJECTS
//              PROJECT No. 9 | p.123


/* 
    Programming Project 8 of chapter 2 asked you to write a progran that calculates the
    remaining balance on a loan after the first, second, and third monthly payments. Modifiy the
    program so that it also asks the user to enter the number of payments and then displays the
    balance remaining after each of these payments.

*/

#include <stdio.h>

int main(void){

    float loan, interest, monthly_payment, monthly_interest;
    int num_monthly_payment;
    
    printf("Enter amount of loan: "); scanf("%f", &loan);
    printf("Enter interest rate: "); scanf("%f", &interest);
    printf("Enter number of monthly payments: "); scanf("%d", &num_monthly_payment);
    
    monthly_interest = interest / (100*12);

    for(int i = 1; i <= num_monthly_payment; i++)
    {
        printf("Enter monthly payment #%d/%d: ", i, num_monthly_payment); scanf("%f", &monthly_payment);

        loan = loan * (1+monthly_interest) - monthly_payment;
        printf("Balance remaining after payment #%d: %.2f\n\n", i, loan);
    }

    return 0;
}
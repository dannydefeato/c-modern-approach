#include <stdio.h>

int main(void)
{

    int hundreds, tens, ones, num, reversed;

    printf("Enter a three-digit number: "); scanf("%d", &num);

    // Hundreds
    hundreds = num / 100;
    tens = (num / 10) % 10;
    ones = num % 10;
    
    reversed = ones * 100 + tens * 10 + hundreds;

    printf("The reversal is: %d", reversed);


    return 0;
}
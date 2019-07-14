//Write a program that reverses a given two-digit number.
//Ex.: User inputs number 28
//Ex.: Program output: 82

//Hint n % 10 returns the last digit. n / 10 results in number with the last digit removed.

#include <stdio.h>

int main(void)
{

    int last, first, num, reversed;

    printf("Enter a two-digit number: "); scanf("%d", &num);

    last = num % 10;
    first = num / 10;

    reversed = last * 10 + first;
    printf("The reversal is: %d", reversed);


    return 0;
}
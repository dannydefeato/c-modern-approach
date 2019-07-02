#include <stdio.h>

int main(void)
{
    int twenty, ten, five, one;
    int amount;

    printf("Enter a dollar amount: "); scanf("%d", &amount);
    
    twenty = amount / 20;
    amount = amount - twenty * 20;
    printf("$20 bills: %d\n", twenty);

    ten = amount / 10;
    amount = amount - ten * 10;
    printf("$10 bills: %d\n", ten);

    five = amount / 5;
    amount = amount - five * 5;
    printf(" $5 bills: %d\n", five);

    //one = amount / 1;
    //amount = amount - one;
    printf(" $1 bills: %d\n", amount);
    
    return 0;
}
#include <stdio.h>

int main(void)
{
    float income, tax;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income < 750.00f)
        tax = income * 0.01f;
    else if( income < 2250.00f)
        tax = 7.50f + 0.02f * (income - 750.00f);
    else if (income < 3750.00f)
        tax = 37.50f + 0.03f * (income - 2250.00f);
    else if (income < 5250.00f)
        tax = 82.50f + 0.04f * (income - 3750.00f);
    else if (income < 7000)
        tax = 142.50f + 0.05f * (income - 5250.00f);
    else
        tax = 230.00f + 0.06f * (income - 7000.00f);


    printf("Tax: %.2f", tax);

    return 0;
}
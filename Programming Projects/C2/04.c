#include <stdio.h>

int main(void)
{
    float input, output;

    printf("Enter an amount: "); scanf("%f", &input);
    output = input * 1.05;
    printf("With tax added: %.2f", output);

    return 0;
}
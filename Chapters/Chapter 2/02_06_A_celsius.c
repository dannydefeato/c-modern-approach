//  CHAPTER 2 - C FUNDAMENTALS
//  2.6 - DEFINING NAMES FOR CONSTANTS

// Converting from Fahrenheit to Celsius

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)  // Defining SCALE_FACTOR to be (5.0f / 9.0f) (float) instead of (5 / 9) (int) because C truncates the result of integers when divided. 
                                    //The value would be 0 then.        

int main(void)
{
    float fahrenheit, celsius;  // Names of variables, functions, macros and others are called 'identifiers'. Here, fahrenheit and celsius are 'identifiers' of the type int.

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR; // The compiler sees this as: celsius = (fahrenheit - 32.0f) * (5.0f / 9.0f);

    printf("Celsius equivalent: %.1f", celsius);

    return 0;
}
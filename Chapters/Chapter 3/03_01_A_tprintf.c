//  CHAPTER 3 - FORMATTED INPUT/OUTPUT
//  3.1 - The printf() Function

            // %.1f -> float value with one digit behind the decimcal point.

            //  A conversion specific can have the form
            //         
            //                 %m.pX or %-m.PX
            //          
            //  where m and p are integer constants and X is a letter. both m and p are optional;
            //  If p is ommitted, the period that seperates m and x is also dropped. 

            //  In the conversion specification 
            //                           
            //                  %10f, m is 10 and p(along with the period) is missing,
            
            //  but in the specification

            //                  %.2f, p is 2 and m is missing
            //  m = minimal field witdht, specifies the number of characters to print
            //  p = precision, p, depends on the the choice of X, the conversion specifier.

            // most common conversion specifiers for numbers are as follows: 
            // d, integer in decimal. p = minimum number of digits to display (extra zero in the beginning); if p is ommitted, it's default is 1 (%.1d)
            // e, floating point number in exponential form. p = indicates how many digits should appear after the dec. point (default 6). if p = 0, no dec. point displayed
            // f, floating point number in "fixed decimal", without exponent. p has the same meaning as for the e specifier.
            // g, floating point number in either "fixed decimal" or exponential format. 
            //            good for displaying numbers which size can't be predicted or that tend to vary widely in size.


#include <stdio.h>

int main(void)
{
    int i;
    float x;

    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    printf("Random strings\n");
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");

    printf("\"Hello\"");
    printf("\n\\\t\\\\\tprints a single \\ character"); //Prints a single '\' character.
    printf("\n%%\t%%%%\tprints a single %% character"); //Prints a single '%' character.

    return 0;
}
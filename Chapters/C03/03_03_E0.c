//CHAPTER 3 - EXERCISES

#include <stdio.h>

int main(void)
{

// 1.   What output do the following calls of printf produce?

    printf("%6d, %4d\n", 86, 1040);
    printf("%12.5e\n", 30.254);
    printf("%.4f\n", 83.162);
    printf("%-6.2g\n\n", .0000009979);

// W2.   Write calls of printf that display a floating variable x in the following formats:

//      Exponential notation; left-justified in a field of size 8; one digit after the decimal point.
//      Exponential notation; right-justified in a field of size 10; six digits after the decimal point. 
//      Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point.
//      Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.

    float x = 65.498;

    printf("%-8.1e\n", x);
    printf("%10.6e\n", x);
    printf("%-8.3f\n", x);
    printf("%6.0f\n", x);

// 3.   For each of the following pairs of scanf format strings, indicate whether or not the two strings are
//      equivalent. If they're not, show how they can be distinguished. 

//      "%d"        vs  " %d"
//      "%d-%d-%d"  vs  "%d -%d -%d"
//      "%f"        vs  "%f "
//      "%f,%f"     vs  "%f, %f"

// 4.   Suppose that we call    scanf("%d%f%d", &i, &x, &j); If the user enters     10.3 5 6
//      what will be the values of i, x and j after the call? (Assume that i and j are int variables and x is a float variable)

// 5.   Suppose that we call    scanf("%f%d%f", &x, &i, &y); If the user enters     12.3 45.6 789
//      what will be the values of x, i and y after the call? (Assume that x and y are float variables and i is a int variable)

// 6.   Show how to modify the 03_02_A_addfrac.c program of section 3.2 so that the user is allowed to enter fractions that contain
//      spaces before and after each / character. 


    return 0;
}
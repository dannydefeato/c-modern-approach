//  C Programming - A Modern Approach (Second Edition)
//  by K. N. King
//  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//  Chapter 6   Loops
//              PROGRAMMING PROJECTS
//              PROJECT No. 10 | p.124


/* 
    Programming Project 9 in Chapter 5 asked you to write a program that determines which of
    two dates comes earlier on the calendar. Generalize the program so that the user may enter
    any number of dates. The user will enter 0/0/0 to indicate that no more dates will be entered:

    ENTER A DATE (MM/DD/YY): 3/6/08
    ENTER A DATE (MM/DD/YY): 5/17/07
    ENTER A DATE (MM/DD/YY): 6/3/07
    ENTER A DATE (MM/DD/YY): 0/0/0
    5/17/07 is the earliest date

*/

#include <stdio.h>

int main(void){

    int m, d, y;
    int mTemp = 99, dTemp = 99, yTemp = 99999;

    while(1)
    {
        printf("Enter date (mm/dd/yy): "); scanf("%d /%d /%d", &m, &d, &y); 

        // Terminats with 0/0/0
        if(m == 0 && d == 0 && y == 0)
            break;

        // Checks the year
        if(y < yTemp)
        {
            yTemp = y;
            mTemp = m;
            dTemp = d;
        }

        // Checks the month
        else if(y == yTemp && m < mTemp)
        {
            yTemp = y;
            mTemp = m;
            dTemp = d;
        }

        // Checks the day
        else if(y == yTemp && m == mTemp && d < dTemp)
        {
            yTemp = y;
            mTemp = m;
            dTemp = d;
        }
     }

    // only displays the result if at least one date has been set
    if(yTemp != 99999)
        printf("%d/%d/%d is the earliest date", mTemp, dTemp, yTemp);


    return 0;
}
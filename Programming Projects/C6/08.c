//  C Programming - A Modern Approach (Second Edition)
//  by K. N. King
//  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//  Chapter 6   Loops
//              PROGRAMMING PROJECTS
//              PROJECT No. 8 | p.123


/* 
    Write a program that prints a one-month calender. The user specifies the number of days in
    the month and the day of the week on which the month begins.

        ENTER NUMBER OF DAYS IN MONTH: 31
        ENTER STARTTING DAY OF THE WEEK (1=Sun, 7=Sat): 3

               1  2  3  4  5
         6  7  8  9 10 11 12
        13 14 15 16 17 18 19
        20 21 22 23 24 25 26
        27 28 29 30 31

        Hint: This program isn't as hard as it looks. The most important part is a for statement that
        uses a variable i to count from 1 to n, where n is t he number of days in the month, printing
        each value of i. Inside the loop, an if statement tests whether i is the last day in the week;
        if so, it prints a new-line character.

*/

#include <stdio.h>
#include <conio.h>

int main(void){

    int n, startingDay;


    // queries if input is valid (between 28 and 31)
    do
    {
        printf("Enter number of days in month: "); scanf("%d", &n);
        
        if(n < 28 || n > 31)
            
            printf("Invalid input: %d\n\n", n);
    
    }while(n < 28 || n > 31);


    // queries if input is valid (between 1 and 7)
    do
    {
        printf("Enter starting day of the week (Sun=1, Sat=7): "); scanf("%d", &startingDay);

        if (startingDay < 1 || startingDay > 7)

            printf("Invalid input: %d\n\n", startingDay);
    
    }while(startingDay < 1 || startingDay > 7);

    for(int i = 1; i <= n - 1 + startingDay; i++)
    {

        if(i < startingDay)
        {
            printf("   ");
        }
        else printf("%3d", i + 1 - startingDay);
    
        if(i % 7 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}

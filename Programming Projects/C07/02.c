//  C Programming - A Modern Approach (Second Edition)
//  by K. N. King
//  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//  Chapter 7   Basic Types
//              PROGRAMMING PROJECTS
//              PROJECT No. 2 | p.157


/* 
    Modifiy the square.c program of Section 6.3 so that it pauses after every 24 squares and
    displays the following message:
        Press Enter to continue...
    After displaying the message, the program should use getchar to read a character.
    getchar won't allow the program to continue until the user presses the Enter key.
    
*/

/* Prints a table of squares using a while statement */

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    fflush(stdin);

    for (i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);

        if (i % 24 == 0)
        {
            printf("Press Enter to continue...");
            getchar ();
        }
    }

return 0;
}


//  C Programming - A Modern Approach (Second Edition)
//  by K. N. King
//  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//  Chapter 7   Basic Types
//              PROGRAMMING PROJECTS
//              PROJECT No. 8 | p.158


/* 
    Modify Programming Project 8 from Chapter 5 so that the user enters a time
    using the 12-hour clock. The input will have the form hours:minutes followed
    by either A, P, AM or PM (either lower-case or upper-case). Whiite space is 
    allowed (but not required) between the numerical time and the AM/PM indicator.
    Examples of valid input:

        1:15P
        1:15PM
        1:15p
        1:15pm
        1:15 P
        1:15 PM
        1:15 p
        1:15 pm

    You may assume that the input has one of these forms; there is no need to test
    for errors.
*/

#include <stdio.h>

int main(void)
{
    int d1 = 8 * 60,        // 8:00 am
        d2 = 9 * 60 + 43,   // 9:43 am
        d3 = 11* 60 + 19,   // 11:19 am
        d4 = 12* 60 + 47,   // 12:47 pm
        d5 = 14 * 60,       // 2:00 pm
        d6 = 15 * 60 + 45,  // 3:45 pm
        d7 = 19 * 60,       // 7:00 pm
        d8 = 21 * 60 + 45;  // 9:45 pm
    
    int hour, minute, user_time, closest_time;
        
    printf("Enter a 24-hour time: "); scanf("%d :%d", &hour, &minute);

    user_time = hour * 60 + minute;


    // if (user_time <= d1 + (d2 - d1) / 2)

    if (user_time <= d1 + (d2 - d1) / 2)
        printf("8:00 am, arriving at 10:16 am");
    
    else if (user_time <= d2 + (d3 - d2) / 2)
        printf("9:43 am, arriving at 11:52 am");
    
    else if (user_time <= d3 + (d4 - d3) / 2)
        printf("11:19 am, arriving at 1:31 pm");
    
    else if (user_time <= d4 + (d5 - d4) / 2 )
        printf("12:47 pm, arriving at 3:00 pm");
    
    else if (user_time <= d5 + (d6 - d5) / 2)
        printf("2:00 pm, arriving at 4:08 pm");
    
    else if (user_time <= d6 + (d7 - d6) / 2)
        printf("3:45 pm, arriving at 5:55 pm");
    
    else if (user_time <= d7 + (d8 - d7) / 2)
        printf("7:00 pm, arriving at 9:20 pm");
    
    else printf("9:45 pm, arriving at 11:58 pm");
    
    return 0;
}
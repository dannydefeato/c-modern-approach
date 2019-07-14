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
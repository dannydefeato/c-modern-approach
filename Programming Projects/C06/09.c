#include <stdio.h>

int main(void)
{

    int month1, day1, year1, month2, day2, year2;

    printf("Enter the first date (mm/dd/yy): "); scanf("%d /%d /%d", &month1, &day1, &year1);
    printf("Enter the second date (mm/dd/yy): "); scanf("%d /%d /%d", &month2, &day2, &year2);

    // checking year
    if (year2 > year1)
        printf("%d/%d/%d is earlier than %d/%d/%d ", month1, day1, year1, month2, day2, year2);
    else if (year1 > year2)
        printf("%d/%d/%d is earlier than %d/%d/%d ", month2, day2, year2, month1, day1, year1);

    //checking month
    else if (month2 > month1)
        printf("%d/%d/%d is earlier than %d/%d/%d ", month1, day1, year1, month2, day2, year2);
    else if (month1 > month2)
        printf("%d/%d/%d is earlier than %d/%d/%d ", month2, day2, year2, month1, day1, year1);

    //checking day
    else if(day2 > day1)
        printf("%d/%d/%d is earlier than %d/%d/%d ", month1, day1, year1, month2, day2, year2);
    else if(day1 > day2)
        printf("%d/%d/%d is earlier than %d/%d/%d ", month2, day2, year2, month1, day1, year1);
        
    return 0;
}
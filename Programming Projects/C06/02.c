#include <stdio.h>

int main(void) {

    int hours, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    if (hours < 11) 
        printf("Equivalent 12-hour time: %d:%d AM", hours == 0 ? 12 : hours, minutes);
        
    
    else 
        printf("Equivalent 12-hour time: %d:%d PM", hours == 12 ? 12 : hours - 12, minutes );   // if "hours == 12" then "hours = 12" "else hours = hours - 12"

    return 0;
}
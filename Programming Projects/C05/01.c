#include <stdio.h>

int main(void)
{

    int num, digits;

    printf("Enter a number (0-9999): ");
    scanf("%d", &num);

    if (num >= 0 && num <=9) {
        digits = 1;
    }
    
    else if (num > 9 && num <= 99) {
        digits = 2;
    }

    else if (num > 99 && num <= 999) {
        digits = 3;
    }
    else if (num > 999 && num <= 9999) {
        digits = 4;
    }

    else {
        printf("Invalid input."); return 0;
    }

    printf("The number %d has %d digits.", num, digits);

    return 0;
}
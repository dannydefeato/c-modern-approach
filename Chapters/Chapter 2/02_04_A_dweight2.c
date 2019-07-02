//  CHAPTER 2 - C FUNDAMENTALS
//  2.4 - VARIABLES AND ASSIGNMENTS

// // Computing the Dimensional Weight of a Box (Revisited)

#include <stdio.h>

#define INCHES_PER_POUND 166 //macro definition; used to define constants
#define RECIPROCAL_OF_PI (1.0f / 3.14159f)

int main(void) 
{
    int height, length, width, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
    
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
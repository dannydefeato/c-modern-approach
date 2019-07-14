//  CHAPTER 2 - C FUNDAMENTALS
//  2.4 - VARIABLES AND ASSIGNMENTS

// Computing the Dimensional Weight of a Box

#include <stdio.h>

int main(void) 
{
    //  int height, length, width, volume, weight;

    //  height = 8;
    //  length = 12;
    //  width = 10;

    int height = 8, length = 12, width = 10, volume;    // int height = 8; The 8 here is called an 'initializer'.
    //int weight, volume;

    //volume = height * length * width;
    //weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    //printf("Volume (cubic inches): %d\n", volume);
    printf("Volume (cubic inches): %d\n", length * width * height); // 'volume' can also be displayed like this. This reduces the number of variables.
                                                                    // Wherever a value is needed, any expression of the same type will do.

    // printf("Dimensional weight (pounds): %d\n", weight);
    printf("Dimensional weight (pounds): %d\n", ((length * width * height + 165) / 166));

    return 0;
}
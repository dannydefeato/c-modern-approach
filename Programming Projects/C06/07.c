#include <stdio.h>

int main(void)
{
int a, b, c, d, min1, min2, max1, max2, max, min;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a < b){
        min1 = a; 
        max1 = b;
    }
    else {
        min1 = b;
        max1 = a;
    }

    if (c < d){
        min2 = c;
        max2 = d;
    }
    else {
        min2 = d;
        max2 = c;
    }

    if (min1 < min2){
        min = min1;
    }
    else {
        min = min2;
    }

    if (max1 < max2){
        max = max2;
    }
    else {
        max = max2;
    }

    printf("Largest: %d\nSmallest: %d", max, min);


    return 0;
}
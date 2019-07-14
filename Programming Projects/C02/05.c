#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Enter the value for x: "); scanf("%d", &x);

    y = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    //y = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x -6;

    printf("Value: %d", y);

    return 0;
}
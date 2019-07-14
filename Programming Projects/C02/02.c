//p.34 No.2 and 3
//compute volume of a sphere; r=10m; v=(4/3)pi*r^3

#include <stdio.h>
#define PI 3.14159f

int main(void)
{
    float v, r;

    printf("Input radius in m: "); scanf("%f", &r);
    v = (4.0f/3.0f) * PI * r * r * r;

    printf("Volume: %f", v);

    return 0;
}
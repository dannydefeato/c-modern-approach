#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f, g, h, i, j, k, l, first_sum, second_sum, total, check;
    //  1  2  3  4  5  6  7  8  9  10 11 12
    //  8  6  9  1  4  8  4  2  6  0  0  0

    printf("Enter the first 12 digits of an EAN: "); scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);

    first_sum = b + d + f + h + j + l;
    second_sum = a + c + e + g + i + k;
    total = 3 * first_sum + second_sum;
    check = 9 - ((((3 * (b + d + f + h + j + l)) + a + c + e + g + i + k) - 1) % 10);

    printf("Check digit: %d\n", check);
    
    return 0;
}
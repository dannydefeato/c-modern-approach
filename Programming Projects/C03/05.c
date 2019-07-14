#include <stdio.h>

int main(void)
{

    int a, b, c, d, 
        e, f, g, h,
        i, j, k, l,
        m, n, o, p;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);

    printf("\n%3d%3d%3d%3d", a, b, c, d);
    printf("\n%3d%3d%3d%3d", e, f, g, h);
    printf("\n%3d%3d%3d%3d", i, j, k, l);
    printf("\n%3d%3d%3d%3d", m, n, o, o);
    
    printf("\nRows sums: %d %d %d %d", (a+b+c+d), (e+f+g+h), (i+j+k+l), (m+n+o+p));
    printf("\nColumn sums: %d %d %d %d", (a+e+i+m), (b+f+j+n), (c+g+k+o), (d+h+l+p));
    printf("\nDiagonal sums: %d %d", (a+f+k+p), (d+g+j+m));


    return 0;
}
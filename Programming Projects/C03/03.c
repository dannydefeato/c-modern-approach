#include <stdio.h>

int main(void)
{
    int a,b,c,d,e;

    printf("Enter ISBN: ");scanf("%d-%d-%d-%d-%d", &a,&b,&c,&d,&e);
    
    printf("GS1 prefix: %d\n", a);
    printf("Group Identifier: %d\n", b);
    printf("Publisher Code: %d\n", c);
    printf("Item Number: %d\n", d);
    printf("Check Digit: %d\n", e);

    return 0;
}
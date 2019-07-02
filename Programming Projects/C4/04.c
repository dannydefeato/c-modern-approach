#include <stdio.h>

int main(void)
{

    int input;
    
    printf("Enter a number between 0 and 32767: "); scanf("%d", &input);

    printf("In octal, your number is: %d%d%d%d%d",      (input/4096)%8,
                                                        (input/512)%8,
                                                        (input/64)%8,
                                                        (input/8)%8,
                                                        input%8);



    return 0;
}
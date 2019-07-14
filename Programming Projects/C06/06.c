//  C Programming - A Modern Approach (Second Edition)
//  by K. N. King
//  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//  Chapter 6   Loops
//              PROGRAMMING PROJECTS
//              PROJECT No. 6 | p.123


/* 
    Write a program that prompts the user to enter a number n, then prints all even squares
    between 1 and n. For example, if the user enters 100, the program should print the following:

    4
    16
    36
    64
    100
*/

#include <stdio.h>

int main(void){

    int num;

    printf("Enter a positive integer: "); scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        if((i * i) % 2 == 0 && (i * i) <= num){
            printf("%d\n", i * i);
        }
    }
    return 0;
}
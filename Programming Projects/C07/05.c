//  C Programming - A Modern Approach (Second Edition)
//  by K. N. King
//  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//  Chapter 7   Basic Types
//              PROGRAMMING PROJECTS
//              PROJECT No. 5 | p.158


/* 
    In the SCRABBLE Crossword Game, players form words using small tiles, each containing
    a letter and a face value. The face value varies from one letter to another, based on
    the letter's rarity. (Here are the face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY,
    5:K, 8: JX, 10: QZ.) Write a program that computes the value of a word by summing the
    values of its letters:

        Enter a word: pitfall
        Scrabble value: 12

    Your program should allow any mixture of lower-case and upper-case letters in the word.
    Hint: use the toupper library function.
    
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{

    char ch;
    int score= 0;

    printf ("Enter a word: ");

    while ((ch = getchar()) != '\n')
    {
        switch (toupper (ch)){

            case 'D':
            case 'G':
                        score += 1;
                        break;

            case 'B':
            case 'C':
            case 'M':
            case 'P':
                        score += 3;
                        break;
            
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y':
                        score += 4;
                        break;

            case 'K':
                        score += 5;
                        break;

            case 'J':
            case 'X':
                        score += 8;
                        break;

            case 'Q':
            case 'Z':
                        score += 10;
                        break;

            default:    score += 1;
                        break;
        }
    }
    printf ("Scrabble value: %d", score);


    return 0;
}
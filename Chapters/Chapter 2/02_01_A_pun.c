//  CHAPTER 2 - C FUNDAMENTALS
//  2.1 - WRITING A SIMPLE PROGRAM

/*  
 *   Name: 02_01_A_pun.c
 *   Purpose: Prints a bad pun.
 *   Author: K. N. King 
 */
 
#include <stdio.h>  //#include: so called 'directive' stating that the information in <stdio.h> is to be included into the program before it is compiled.

int main(void)  // main function, mandatory; gets called automatically when the program is executed. The 'int' means it returns an integer value.
             // 'void' indicates that the 'main' functions has no arguments. 
{
    printf("To C, or not to C: that is the question.\n");   // 'printf' function call. Here: 'string literal' - a series of characters enclosed in double quotation marks.
                                                            // '/n' -- new-line character. Instructs printf to advance to the next output line.
    printf("To C, or not to C: ");
    printf("that is the question.\n");

    printf("Brevity is the soul of wit.\n  --Shakespeare\n");


    return 0;   // The statement 'return 0' causes the 'main' function to terminate with the value of 0. Each statements has to end with a semicolon.
}

/*  THIS IS A COMMENT */
//  SINCE C99 THIS IS ALSO A COMMENT, SINGLE LINE.
  
//  Compiling and Linking
//      - Preprocessor: The program is first given to a preprocessor, which obeys directives (commands that begin with #; like #include).
//                      Like an editor, it can add stuff to and modify programs.
//      - Compiling:    Translation into machine instructions (object code).
//      - Linking:      Object code created by the compiler is combined with additional code needed
//                      to yield a complete program. This additional code includes library functions
//                      like 'printf' used in the program.
//      After compiling and linking, a file with the extension .out is created.
//      The -o option allows the user to specify the name of the executable file.
//
//      The most popular C compilers is the GCC compiler (MinGW under Windows).
//      To compile the 02_01_A_pun.c program, the following command is used:
//              gcc -o 02_01_A_pun 02_01_A_pun.c
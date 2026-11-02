/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 03 – Input and Output
 * Question: 8. Write a C program to take a character and a string as input and display them.
 *
 * Input   : K | Programming
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    char ch;
    char str[100];

    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1) return 1;

    printf("Enter a word/string: ");
    if (scanf("%99s", str) != 1) return 1;

    printf("\nYou entered:\n");
    printf("Character : %c\n", ch);
    printf("String    : %s\n", str);

    return 0;
}

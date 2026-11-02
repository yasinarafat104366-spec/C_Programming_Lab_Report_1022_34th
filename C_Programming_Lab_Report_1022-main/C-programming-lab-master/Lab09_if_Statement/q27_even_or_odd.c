/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 09 – if Statement
 * Question: 27. Write a C program to check whether a number is even or odd.
 *
 * Input   : 28
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) return 1;

    if (num % 2 == 0) {
        printf("%d is Even.\n", num);
    }
    if (num % 2 != 0) {
        printf("%d is Odd.\n", num);
    }

    return 0;
}

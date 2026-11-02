/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 09 – if Statement
 * Question: 26. Write a C program to check whether a number is positive, negative, or zero.
 *
 * Input   : -12
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) return 1;

    if (num > 0) {
        printf("%d is Positive.\n", num);
    }
    if (num < 0) {
        printf("%d is Negative.\n", num);
    }
    if (num == 0) {
        printf("The number is Zero.\n");
    }

    return 0;
}

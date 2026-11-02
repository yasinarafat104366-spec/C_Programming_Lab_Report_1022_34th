/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 12 – else-if Ladder
 * Question: 35. Write a C program to determine whether a number is positive, negative, or zero using an else-if ladder.
 *
 * Input   : 0
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) return 1;

    // Using else-if ladder
    if (num > 0) {
        printf("%d is Positive.\n", num);
    } else if (num < 0) {
        printf("%d is Negative.\n", num);
    } else {
        printf("The number is Zero.\n");
    }

    return 0;
}

/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 19 – Nested Loops
 * Question: 57. Write a C program to print a square star pattern.
 *
 * Input   : No input required.
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int size = 5;

    printf("Square star pattern (5x5):\n");
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

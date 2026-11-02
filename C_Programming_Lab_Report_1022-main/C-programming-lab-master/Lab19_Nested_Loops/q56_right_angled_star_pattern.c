/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 19 – Nested Loops
 * Question: 56. Write a C program to print a right-angled star pattern.
 *
 * Input   : No input required.
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int rows = 5;

    printf("Right-angled star pattern (5 rows):\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

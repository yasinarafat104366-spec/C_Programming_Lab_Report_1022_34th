/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 14 – Loops
 * Question: 41. Write a C program to print numbers from 1 to 100 using a for loop.
 *
 * Input   : No input required.
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    printf("Numbers from 1 to 100:\n");
    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
        if (i % 10 == 0) {
            printf("\n");
        }
    }
    return 0;
}

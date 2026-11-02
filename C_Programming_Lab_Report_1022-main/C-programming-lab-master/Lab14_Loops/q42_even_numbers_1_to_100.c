/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 14 – Loops
 * Question: 42. Write a C program to print even numbers from 1 to 100.
 *
 * Input   : No input required.
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    printf("Even numbers from 1 to 100:\n");
    for (int i = 2; i <= 100; i += 2) {
        printf("%d ", i);
        if (i % 20 == 0) {
            printf("\n");
        }
    }
    return 0;
}

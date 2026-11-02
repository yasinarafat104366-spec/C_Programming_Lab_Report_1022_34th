/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 11 – Nested if
 * Question: 32. Write a C program to find the largest among three numbers using nested if.
 *
 * Input   : 25 60 42
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int a, b, c, largest;

    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;

    // Finding largest using nested if
    if (a >= b) {
        if (a >= c) {
            largest = a;
        } else {
            largest = c;
        }
    } else {
        if (b >= c) {
            largest = b;
        } else {
            largest = c;
        }
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}

/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 11 – Nested if
 * Question: 33. Write a C program to find the smallest among three numbers using nested if.
 *
 * Input   : 25 60 42
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int a, b, c, smallest;

    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;

    // Finding smallest using nested if
    if (a <= b) {
        if (a <= c) {
            smallest = a;
        } else {
            smallest = c;
        }
    } else {
        if (b <= c) {
            smallest = b;
        } else {
            smallest = c;
        }
    }

    printf("The smallest number is: %d\n", smallest);

    return 0;
}

/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 18 – Number Series
 * Question: 54. Write a C program to find the GCD of two numbers.
 *
 * Input   : 48 18
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int n1, n2, a, b, rem;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &n1, &n2) != 2) return 1;

    a = n1;
    b = n2;

    // Euclidean Algorithm for GCD
    while (b != 0) {
        rem = a % b;
        a = b;
        b = rem;
    }

    printf("The GCD of %d and %d is: %d\n", n1, n2, a);

    return 0;
}

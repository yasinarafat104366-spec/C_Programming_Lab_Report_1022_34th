/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 15 – for Loop Problems
 * Question: 45. Write a C program to calculate the factorial of a number.
 *
 * Input   : 5
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int n;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1) return 1;

    if (n < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= (unsigned long long)i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}

/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 15 – for Loop Problems
 * Question: 44. Write a C program to calculate the sum of the first N natural numbers.
 *
 * Input   : 10
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int n, sum = 0;

    printf("Enter a positive integer N: ");
    if (scanf("%d", &n) != 1) return 1;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}

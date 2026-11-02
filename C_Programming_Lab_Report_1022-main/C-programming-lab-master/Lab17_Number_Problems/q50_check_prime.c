/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 17 – Number Problems
 * Question: 50. Write a C program to check whether a number is a prime number.
 *
 * Input   : 29
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int n, isPrime = 1;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1) return 1;

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a Prime Number.\n", n);
    } else {
        printf("%d is Not a Prime Number.\n", n);
    }

    return 0;
}

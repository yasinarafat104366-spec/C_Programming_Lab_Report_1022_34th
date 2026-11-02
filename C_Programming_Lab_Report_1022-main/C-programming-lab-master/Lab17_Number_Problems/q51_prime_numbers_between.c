/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 17 – Number Problems
 * Question: 51. Write a C program to print all prime numbers between two given numbers.
 *
 * Input   : 10 30
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int lower, upper;

    printf("Enter lower bound and upper bound: ");
    if (scanf("%d %d", &lower, &upper) != 2) return 1;

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    for (int i = lower; i <= upper; i++) {
        if (i <= 1) continue;

        int isPrime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

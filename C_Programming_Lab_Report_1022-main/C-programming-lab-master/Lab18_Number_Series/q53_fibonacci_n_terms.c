/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 18 – Number Series
 * Question: 53. Write a C program to generate the Fibonacci series up to N terms.
 *
 * Input   : 8
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int n;
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms (N): ");
    if (scanf("%d", &n) != 1) return 1;

    printf("Fibonacci Series (%d terms):\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%lld ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");

    return 0;
}

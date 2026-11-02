/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 07 – Conditional Operator
 * Question: 21. Write a C program to check whether a number is even or odd using the conditional operator.
 *
 * Input   : 17
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) return 1;

    // Using conditional operator to check even or odd
    (num % 2 == 0) ? printf("%d is Even\n", num) : printf("%d is Odd\n", num);

    return 0;
}

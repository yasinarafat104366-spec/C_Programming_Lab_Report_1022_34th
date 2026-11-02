/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 07 – Conditional Operator
 * Question: 20. Write a C program to find the larger of two numbers using the conditional operator.
 *
 * Input   : 45 78
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int num1, num2, max;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &num1, &num2) != 2) return 1;

    // Using ternary (conditional) operator
    max = (num1 > num2) ? num1 : num2;

    printf("The larger number is: %d\n", max);

    return 0;
}

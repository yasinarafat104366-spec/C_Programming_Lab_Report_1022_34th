/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 06 – Increment, Decrement and Assignment Operators
 * Question: 18. Write a C program to swap two numbers using a third variable.
 *
 * Input   : 10 | 20
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int a, b, temp;

    printf("Enter first number (a): ");
    if (scanf("%d", &a) != 1) return 1;

    printf("Enter second number (b): ");
    if (scanf("%d", &b) != 1) return 1;

    printf("\nBefore Swapping: a = %d, b = %d\n", a, b);

    // Swapping logic using temporary variable
    temp = a;
    a = b;
    b = temp;

    printf("After Swapping : a = %d, b = %d\n", a, b);

    return 0;
}

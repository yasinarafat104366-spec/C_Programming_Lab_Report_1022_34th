/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 03 – Input and Output
 * Question: 7. Write a C program to take two integers as input and display them.
 *
 * Input   : 10 | 25
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int num1, num2;

    printf("Enter first integer: ");
    if (scanf("%d", &num1) != 1) return 1;

    printf("Enter second integer: ");
    if (scanf("%d", &num2) != 1) return 1;

    printf("\nYou entered:\n");
    printf("First integer  = %d\n", num1);
    printf("Second integer = %d\n", num2);

    return 0;
}

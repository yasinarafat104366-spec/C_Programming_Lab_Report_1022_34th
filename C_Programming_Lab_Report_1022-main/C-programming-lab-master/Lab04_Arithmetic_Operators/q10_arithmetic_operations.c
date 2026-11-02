/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 04 – Arithmetic Operators
 * Question: 10. Write a C program to perform addition, subtraction, multiplication, division, and modulus of two numbers.
 *
 * Input   : 20 6
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two numbers (a and b): ");
    if (scanf("%d %d", &a, &b) != 2) return 1;

    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition       (%d + %d) = %d\n", a, b, a + b);
    printf("Subtraction    (%d - %d) = %d\n", a, b, a - b);
    printf("Multiplication (%d * %d) = %d\n", a, b, a * b);

    if (b != 0) {
        printf("Division       (%d / %d) = %.2f\n", a, b, (float)a / b);
        printf("Modulus        (%d %% %d) = %d\n", a, b, a % b);
    } else {
        printf("Division and Modulus by zero are not allowed.\n");
    }

    return 0;
}

/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 13 – switch Statement
 * Question: 38. Write a C program to perform basic arithmetic operations using switch.
 *
 * Input   : + | 12 8
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    char op;
    double a, b;

    printf("Enter an operator (+, -, *, /): ");
    if (scanf(" %c", &op) != 1) return 1;

    printf("Enter two operands: ");
    if (scanf("%lf %lf", &a, &b) != 2) return 1;

    switch (op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: '%c' is not a valid operator.\n", op);
    }

    return 0;
}

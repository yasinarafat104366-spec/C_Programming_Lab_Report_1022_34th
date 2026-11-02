/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 05 – More Arithmetic Problems
 * Question: 14. Write a C program to convert Celsius to Fahrenheit.
 *
 * Input   : 37
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    double celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    if (scanf("%lf", &celsius) != 1) return 1;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("\n%.2lf Celsius = %.2lf Fahrenheit\n", celsius, fahrenheit);

    return 0;
}

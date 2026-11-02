/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 04 – Arithmetic Operators
 * Question: 11. Write a C program to calculate the sum and average of three numbers.
 *
 * Input   : 15 25 35
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    double num1, num2, num3;
    double sum, average;

    printf("Enter three numbers: ");
    if (scanf("%lf %lf %lf", &num1, &num2, &num3) != 3) return 1;

    sum = num1 + num2 + num3;
    average = sum / 3.0;

    printf("\nSum     = %.2lf\n", sum);
    printf("Average = %.2lf\n", average);

    return 0;
}

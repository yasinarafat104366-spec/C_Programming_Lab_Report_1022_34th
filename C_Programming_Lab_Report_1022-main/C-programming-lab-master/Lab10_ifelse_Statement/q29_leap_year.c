/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 10 – if-else Statement
 * Question: 29. Write a C program to check whether a year is a leap year or not.
 *
 * Input   : 2024
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int year;

    printf("Enter a year: ");
    if (scanf("%d", &year) != 1) return 1;

    // Leap year condition:
    // Divisible by 400 OR (divisible by 4 and NOT divisible by 100)
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is Not a Leap Year.\n", year);
    }

    return 0;
}

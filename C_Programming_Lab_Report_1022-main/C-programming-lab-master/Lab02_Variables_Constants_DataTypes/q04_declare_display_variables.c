/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 02 – Variables, Constants and Data Types
 * Question: 4. Write a C program to declare and display variables of different data types.
 *
 * Input   : No input required.
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int integerVar = 25;
    float floatVar = 3.14159f;
    double doubleVar = 12345.6789;
    char charVar = 'A';

    printf("Integer value : %d\n", integerVar);
    printf("Float value   : %.2f\n", floatVar);
    printf("Double value  : %.4lf\n", doubleVar);
    printf("Char value    : %c\n", charVar);

    return 0;
}

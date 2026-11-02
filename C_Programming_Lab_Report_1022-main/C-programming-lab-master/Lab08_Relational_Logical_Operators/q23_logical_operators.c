/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 08 – Relational and Logical Operators
 * Question: 23. Write a C program to demonstrate the use of logical AND, OR, and NOT operators.
 *
 * Input   : No input required.
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int a = 1; // Represents True
    int b = 0; // Represents False

    printf("Given: a = %d (True), b = %d (False)\n\n", a, b);

    // Logical AND (&&)
    printf("Logical AND (a && b) : %d\n", a && b);

    // Logical OR (||)
    printf("Logical OR  (a || b) : %d\n", a || b);

    // Logical NOT (!)
    printf("Logical NOT (!a)     : %d\n", !a);
    printf("Logical NOT (!b)     : %d\n", !b);

    return 0;
}

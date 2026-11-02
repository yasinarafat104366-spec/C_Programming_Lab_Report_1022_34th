/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 06 – Increment, Decrement and Assignment Operators
 * Question: 17. Write a C program to demonstrate the use of increment and decrement operators.
 *
 * Input   : No input required.
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int x = 10;

    printf("Initial value of x: %d\n\n", x);

    printf("Post-increment (x++): %d\n", x++);
    printf("Value of x after x++: %d\n\n", x);

    printf("Pre-increment (++x): %d\n", ++x);
    printf("Value of x after ++x: %d\n\n", x);

    printf("Post-decrement (x--): %d\n", x--);
    printf("Value of x after x--: %d\n\n", x);

    printf("Pre-decrement (--x): %d\n", --x);
    printf("Value of x after --x: %d\n", x);

    return 0;
}

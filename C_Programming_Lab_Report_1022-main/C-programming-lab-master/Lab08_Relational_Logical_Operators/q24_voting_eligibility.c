/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 08 – Relational and Logical Operators
 * Question: 24. Write a C program to check whether a person is eligible to vote.
 *
 * Input   : 20
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int age;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) return 1;

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote. You must wait %d more year(s).\n", 18 - age);
    }

    return 0;
}

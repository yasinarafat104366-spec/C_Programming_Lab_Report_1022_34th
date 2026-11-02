/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 16 – while and do-while
 * Question: 47. Write a C program to reverse the digits of an integer using a while loop.
 *
 * Input   : 12345
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int num, reversed = 0, temp;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) return 1;

    temp = num;
    while (temp != 0) {
        int remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    }

    printf("Original number : %d\n", num);
    printf("Reversed number : %d\n", reversed);

    return 0;
}

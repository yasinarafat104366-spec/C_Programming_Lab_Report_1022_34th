/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 16 – while and do-while
 * Question: 48. Write a C program to find the sum of the digits of a number.
 *
 * Input   : 456
 * Output  : See expected output in README.md
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num, temp, sum = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) return 1;

    temp = abs(num);
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of digits of %d = %d\n", num, sum);

    return 0;
}

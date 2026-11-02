/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 12 – else-if Ladder
 * Question: 36. Write a C program to display the day of the week based on a number from 1 to 7.
 *
 * Input   : 5
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int day;

    printf("Enter day number (1-7): ");
    if (scanf("%d", &day) != 1) return 1;

    // else-if ladder for day names
    if (day == 1) {
        printf("Day %d is Sunday\n", day);
    } else if (day == 2) {
        printf("Day %d is Monday\n", day);
    } else if (day == 3) {
        printf("Day %d is Tuesday\n", day);
    } else if (day == 4) {
        printf("Day %d is Wednesday\n", day);
    } else if (day == 5) {
        printf("Day %d is Thursday\n", day);
    } else if (day == 6) {
        printf("Day %d is Friday\n", day);
    } else if (day == 7) {
        printf("Day %d is Saturday\n", day);
    } else {
        printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}

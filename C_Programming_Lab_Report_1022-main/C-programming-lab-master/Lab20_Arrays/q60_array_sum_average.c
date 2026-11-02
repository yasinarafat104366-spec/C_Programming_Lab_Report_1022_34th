/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 20 – Arrays
 * Question: 60. Write a C program to find the sum and average of array elements from user input.
 *
 * Input   : 5 | 10 20 30 40 50
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int n;
    double sum = 0.0, average;

    printf("Enter number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    double arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        if (scanf("%lf", &arr[i]) != 1) return 1;
        sum += arr[i];
    }

    average = sum / n;

    printf("\n--- Results ---\n");
    printf("Sum     = %.2lf\n", sum);
    printf("Average = %.2lf\n", average);

    return 0;
}

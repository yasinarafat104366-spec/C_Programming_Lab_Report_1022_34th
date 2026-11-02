/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 20 – Arrays
 * Question: 59. Write a C program to input and display the elements of a one-dimensional array from 1 to 10 numbers.
 *
 * Input   : 5 12 7 9 21 3 18 42 1 10
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    int arr[10];

    printf("Enter 10 integers for the array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element [%d]: ", i);
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    printf("\nArray elements are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 05 – More Arithmetic Problems
 * Question: 13. Write a C program to calculate the area and circumference of a circle.
 *
 * Input   : 5
 * Output  : See expected output in README.md
 */

#include <stdio.h>
#define PI 3.141592653589793

int main(void) {
    double radius, area, circumference;

    printf("Enter radius of the circle: ");
    if (scanf("%lf", &radius) != 1) return 1;

    area = PI * radius * radius;
    circumference = 2.0 * PI * radius;

    printf("\nRadius        = %.2lf\n", radius);
    printf("Area          = %.2lf\n", area);
    printf("Circumference = %.2lf\n", circumference);

    return 0;
}

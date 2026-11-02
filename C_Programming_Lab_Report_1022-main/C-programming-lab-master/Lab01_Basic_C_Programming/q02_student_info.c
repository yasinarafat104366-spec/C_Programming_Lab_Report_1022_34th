/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 01 – Basic C Programming
 * Question: 2. Write a C program to display your name, ID, department, and university name.
 *
 * Input   : No input required.
 * Output  : See expected output in README.md
 */

#include <stdio.h>

int main(void) {
    // Student Information Variables
    char name[] = "Md Yasin Arafat";
    char id[] = "1022"; // Replace with your actual Student ID
    char department[] = "Computer Science and Engineering (CSE)";
    char university[] = "Frist Capital University of Bangladesh"; // Replace with your University name

    printf("===========================================\n");
    printf("          STUDENT INFORMATION             \n");
    printf("===========================================\n");
    printf("Name       : %s\n", name);
    printf("ID         : %s\n", id);
    printf("Department : %s\n", department);
    printf("University : %s\n", university);
    printf("===========================================\n");

    return 0;
}

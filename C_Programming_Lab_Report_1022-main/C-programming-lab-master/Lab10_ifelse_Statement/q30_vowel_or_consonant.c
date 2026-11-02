/**
 * Course  : Structured Programming Language (SPL)
 * Lab     : Lab 10 – if-else Statement
 * Question: 30. Write a C program to check whether a character is a vowel or consonant.
 *
 * Input   : e
 * Output  : See expected output in README.md
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    printf("Enter an alphabet character: ");
    if (scanf(" %c", &ch) != 1) return 1;

    if (!isalpha(ch)) {
        printf("'%c' is not an alphabet letter.\n", ch);
    } else {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("'%c' is a Vowel.\n", ch);
        } else {
            printf("'%c' is a Consonant.\n", ch);
        }
    }

    return 0;
}

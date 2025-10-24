/*
 * test_standard.c
 * A standard C program to test the basic functionality of the scanner.
 * It includes loops, conditionals, and basic arithmetic.
 */

#include <stdio.h>

int main() {
    int i = 0;
    int sum = 0;
    const int MAX_VALUE = 100; // A constant integer

    // A for loop to calculate a sum
    for (i = 1; i <= MAX_VALUE; i++) {
        sum = sum + i;
    }

    if (sum > 2000) {
        // This is a single line comment inside a block
        sum = sum * 2;
    } else {
        sum -= 50; // Use a compound assignment operator
    }

    return 0;
}
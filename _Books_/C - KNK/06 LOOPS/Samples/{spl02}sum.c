/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* sum.c (Chapter 6, page 103) */
/* Sums a series of numbers */

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");
    scanf("%d", &n);
    // This program sums a series of integers.
    // Enter integers (0 to terminate): 1

    while (n != 0) {
        sum += n;
        scanf("%d", &n);
    }
    // 10 100
    // 1000
    // 0

    printf("The sum is: %d\n", sum);
    // The sum is: 1111

    return 0;
}

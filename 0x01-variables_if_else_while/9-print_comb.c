/*
 * File: 9-print_comb.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	 int i, n;
    for (n = 1; n < 1000000; n++) {
        for (i = n;;) {
            if (i / 10 % 10 > i % 10) break;
            if ((i /= 10) == 0) { putchar("%d\n", n); break; }
        }
    }

	return (0);
}

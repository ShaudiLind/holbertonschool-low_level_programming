/*
 * 9-print_comb.c - Prints all possible combinations of single-digit numbers
 */

#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints single digits 0-9 separated by comma and space,
 * followed by newline
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

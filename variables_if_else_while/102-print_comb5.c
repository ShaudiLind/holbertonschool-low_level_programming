/*
 * 102-print_comb5.c - Prints all combinations of two two-digit numbers
 */

#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all unique combinations of two two-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			/* Print first number with leading zero */
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			/* Print second number with leading zero */
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');

			/* Add separator if not last combination */
			if (i < 98 || j < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

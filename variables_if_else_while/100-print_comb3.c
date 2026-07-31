/*
 * 100-print_comb3.c - Prints all unique two-digit combinations
 */

#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all unique two-digit combinations in ascending order
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

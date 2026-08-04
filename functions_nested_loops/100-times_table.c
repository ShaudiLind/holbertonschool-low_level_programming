#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number for which to print the times table
 *
 * Description: Prints the times table for n if 0 <= n <= 15.
 *              Each row contains (row_number * column_number) for columns 0 to n.
 *              Numbers are formatted with proper spacing for alignment.
 */
void print_times_table(int n)
{
	int row, col, product;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			product = row * col;

			if (col == 0)
			{
				/* First number in row: no leading comma/space */
				_print_number(product);
			}
			else if (product < 10)
			{
				/* Single digit: ",  X" (comma, space, space, digit) */
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product < 100)
			{
				/* Two digits: ", XX" (comma, space, tens, ones) */
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
			else
			{
				/* Three digits: ", XXX" (comma, space, hundreds, tens, ones) */
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 100));
				_putchar('0' + ((product / 10) % 10));
				_putchar('0' + (product % 10));
			}
		}
		_putchar('\n');
	}
}

/**
 * _print_number - helper function to print an integer using only _putchar
 * @n: the number to print
 */
static void _print_number(int n)
{
	int divisor = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Find the highest power of 10 less than or equal to n */
	while (n / divisor >= 10)
		divisor *= 10;

	/* Print each digit from left to right */
	while (divisor > 0)
	{
		_putchar('0' + (n / divisor));
		n %= divisor;
		divisor /= 10;
	}
}

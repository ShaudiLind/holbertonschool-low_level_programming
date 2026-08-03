#include "main.h"

/**
 * print_number - prints an integer using only _putchar
 * @n: the integer to print
 *
 * Description: Prints an integer, handling negative numbers and zero
 * Uses recursion to print digits from left to right
 */
void print_number(int n)
{
	unsigned int num;

	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	/* Recursive case: if num >= 10, print higher digits first */
	if (num >= 10)
	{
		print_number(num / 10);
	}

	/* Print the last digit */
	_putchar((num % 10) + '0');
}

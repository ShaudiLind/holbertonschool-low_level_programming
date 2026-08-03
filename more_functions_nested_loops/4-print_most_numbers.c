#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9, except 2 and 4
 *
 * Description: This function prints all single-digit numbers
 * from 0 through 9 in ascending order, except for the numbers
 * 2 and 4 which are skipped. Each number is converted to its
 * ASCII character representation and printed. Followed by a
 * new line. Only two calls to _putchar are made in the code.
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}


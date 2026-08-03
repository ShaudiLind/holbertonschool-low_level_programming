#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 *
 * Description: Prints a right-aligned triangle using # characters
 * If size is 0 or less, prints only a new line
 */
void print_triangle(int size)
{
	int i, j, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* Print leading spaces */
		spaces = size - i;
		for (j = 0; j < spaces; j++)
		{
			_putchar(' ');
		}

		/* Print # characters */
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}

		/* New line after each row */
		_putchar('\n');
	}
}

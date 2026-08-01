#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row;
	int col;
	int result;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			result = row * col;
			
			/* For numbers >= 10, print tens digit first */
			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar(',');
				_putchar(' ');
				_putchar((result % 10) + '0');
			}
			/* For single digit numbers, we still need the comma-space format */
			else if (col > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(result + '0');
			}
			/* First number in row has no comma-space before it */
			else
			{
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}

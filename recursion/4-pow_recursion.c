#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the base number
 * @y: the exponent
 * Return: x raised to the power of y, or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	/* Error case: if y is less than 0, return -1 */
	if (y < 0)
	{
		return (-1);
	}

	/* Base case: anything to the power of 0 is 1 */
	if (y == 0)
	{
		return (1);
	}

	/* Recursive step: x * x^(y-1) */
	return (x * _pow_recursion(x, y - 1));
}


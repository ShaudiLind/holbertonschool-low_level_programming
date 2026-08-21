#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to measure
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	/* Base case: if we are at the end, the length is 0 */
	if (*s == '\0')
	{
		return (0);
	}

	/* Recursive step: 1 (for this char) + length of the rest */
	return (1 + _strlen_recursion(s + 1));
}


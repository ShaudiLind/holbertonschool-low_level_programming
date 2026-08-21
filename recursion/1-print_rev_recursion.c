#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to print
 */
void _print_rev_recursion(char *s)
{
	/* Base case: If we hit the null terminator, stop recurring */
	if (*s == '\0')
	{
		return;
	}

	/* Recursive call: Move forward to the end of the string first */
	_print_rev_recursion(s + 1);

	/* Print the character only after returning from the recursive call */
	_putchar(*s);
}


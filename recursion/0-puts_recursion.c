#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
	/* Base case: If we reach the null terminator, print the newline and return */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/* Print the current character */
	_putchar(*s);

	/* Recursive call: move the pointer to the next character */
	_puts_recursion(s + 1);
}


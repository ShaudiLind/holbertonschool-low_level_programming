#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	/* 1. Find the end of the string */
	while (s[i] != '\0')
		i++;

	/* 2. Move backwards from the last character */
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	/* 3. Print the new line */
	_putchar('\n');
}


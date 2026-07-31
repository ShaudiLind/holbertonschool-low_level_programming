/*
 * 2-print_alphabet_x10.c - Function to print alphabet 10 times
 */

#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 *
 * Description: This function prints the lowercase alphabet 10 times,
 *              each followed by a newline, using only _putchar twice.
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

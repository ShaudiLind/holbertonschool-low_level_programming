/*
 * 1-alphabet.c - Function to print lowercase alphabet
 */

#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by newline
 *
 * Description: This function prints all lowercase letters from 'a' to 'z'
 *              followed by a newline character using only _putchar twice.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}

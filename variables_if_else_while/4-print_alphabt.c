/*
 * 4-print_alphabet.c - Prints lowercase alphabet except q and e
 */

#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints lowercase alphabet excluding 'q' and 'e',
 * followed by newline
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}

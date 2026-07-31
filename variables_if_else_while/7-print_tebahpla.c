/*
 * 7-print_tebahpla.c - Prints the lowercase alphabet in reverse
 */

#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the lowercase alphabet in reverse followed by newline
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}

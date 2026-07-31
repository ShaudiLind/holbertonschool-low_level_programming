/*
 * 8-print_base16.c - Prints all hexadecimal digits in lowercase
 */

#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all base 16 digits (0-9, a-f) followed by newline
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	/* Print digits 0-9 */
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	/* Print letters a-f */
	for (i = 0; i < 6; i++)
	{
		putchar(i + 'a');
	}

	/* Print newline */
	putchar('\n');

	return (0);
}

/*
 * 5-print_numbers.c - Prints all single digit numbers of base 10
 */

#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all single digit numbers (0-9) followed by newline
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}


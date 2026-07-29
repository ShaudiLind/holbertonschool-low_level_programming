#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char letter;

	/* Print lowercase letters */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	/* Print uppercase letters */
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	/* Print newline */
	putchar('\n');

	return (0);
}

#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

int _putchar(char c);

#endif 
/*
 * _putchar.c - Implementation of _putchar function
 */

#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
} 
/*
 * 0-putchar.c - Prints _putchar followed by newline
 */

#include "main.h"

/**
 * main - Entry point
 * Description: Prints the string "_putchar" followed by a newline
 * Return: Always 0 (success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}

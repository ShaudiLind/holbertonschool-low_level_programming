#include <stdio.h>

/**
 * function_name - short description
 * @param: description of parameter
 *
 * Return: description of return value
 * print_before_main - prints a string before the main function is executed
 *
 * Return: void
 */
void __attribute__ ((constructor)) print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}


#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all integers from n to 98, followed by a new line
 * @n: starting integer
 *
 * Description: Prints numbers from n to 98 in ascending order if n < 98,
 *              or descending order if n > 98. Numbers are separated by ", ".
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98\n");
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98\n");
	}
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 * @...: a variable number of strings to print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		/* Get the next argument */
		str = va_arg(ap, char *);

		/* Print "(nil)" if the string is NULL, otherwise print the string */
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		/* Print separator if it exists and we are not at the last string */
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}


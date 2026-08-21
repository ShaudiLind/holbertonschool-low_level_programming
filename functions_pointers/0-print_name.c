#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: a pointer to the function to be used for printing
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	/* Check if the pointer 'f' is NULL to avoid segmentation faults */
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}


#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array.
 * @array: the array of integers
 * @size: the number of elements in the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: the index of the first element for which the cmp function
 * does not return 0. If no element matches, return -1.
 * If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			/* If cmp returns something other than 0, we found a match */
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}


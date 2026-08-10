#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* Check if size is 0 */
	if (size == 0)
		return (NULL);

	/* Allocate memory */
	array = malloc(size * sizeof(char));

	/* Check if malloc failed */
	if (array == NULL)
		return (NULL);

	/* Initialize the array */
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}


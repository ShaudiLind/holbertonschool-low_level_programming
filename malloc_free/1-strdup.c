#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	/* Calculate length */
	len = 0;
	while (str[len] != '\0')
		len++;

	/* Allocate memory (+1 for null terminator) */
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	/* Copy the string */
	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}


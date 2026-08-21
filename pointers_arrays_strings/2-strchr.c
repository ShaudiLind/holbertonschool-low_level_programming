#include "main.h"
#include <stddef.h> /* Included for NULL */

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to find
 *
 * Return: a pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	/* Iterate through the string until the null terminator is reached */
	for (i = 0; s[i] >= '\0'; i++)
	{
		/* If the current character matches c, return a pointer to it */
		if (s[i] == c)
			return (s + i);

		/* If we reached the null terminator and didn't find c, stop */
		if (s[i] == '\0')
			break;
	}

	return (NULL);
}


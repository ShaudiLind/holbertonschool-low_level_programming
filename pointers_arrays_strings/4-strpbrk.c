#include "main.h"
#include <stddef.h> /* Required for NULL */

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				/* Return the address of the match in s */
				return (&s[i]);
			}
		}
	}

	/* Return NULL if no matches were found after checking the whole string */
	return (NULL);
}


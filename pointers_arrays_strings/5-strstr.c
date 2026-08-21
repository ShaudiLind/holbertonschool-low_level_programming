#include "main.h"
#include <stddef.h> /* Standard header for NULL */

/**
 * _strstr - locates a substring
 * @haystack: the string to search within
 * @needle: the substring to search for
 *
 * Return: pointer to the beginning of the located substring, 
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	/* If needle is empty, return haystack */
	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* Check if the substring matches starting at haystack[i] */
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		/* If we reached the end of needle, we found the match */
		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	/* If no match is found after the full search */
	return (NULL);
}


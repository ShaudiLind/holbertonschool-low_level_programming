#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Return: the number of bytes in the initial segment of s 
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		/* Check if s[i] is in accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		/* If we reached the end of accept, it means s[i] wasn't found */
		if (accept[j] == '\0')
			return (i);
	}

	return (i);
}


#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if identical, 0 otherwise
 * @s1: the first string (the one to be compared)
 * @s2: the second string (can contain the wildcard '*')
 * Return: 1 if strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* Base case: if both strings reach the end, they match */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If we find a wildcard */
	if (*s2 == '*')
	{
		/* Case 1: '*' matches empty string (skip '*') */
		/* Case 2: '*' matches one char (move forward in s1) */
		if (*(s2 + 1) != '\0' && *s1 == '\0')
			return (0);
		if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
			return (1);
	}

	/* Standard character match */
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* If no match found */
	return (0);
}


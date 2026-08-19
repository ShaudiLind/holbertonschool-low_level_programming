#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: The pointer to the string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/* Check if the character is lowercase (ASCII 97-122) */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* Convert to uppercase by subtracting 32 from its ASCII value */
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}


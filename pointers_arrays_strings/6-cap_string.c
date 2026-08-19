#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i, j;
	char *sep = " \t\n,;.!?\"(){}";

	/* Check first character separately */
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Look for separators */
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{
				/* If next char is lowercase, capitalize it */
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}

	return (str);
}


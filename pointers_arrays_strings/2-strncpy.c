/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy up to n characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* If src is shorter than n, fill the rest of dest with null bytes */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}


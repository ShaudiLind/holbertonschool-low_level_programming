#include <stdlib.h>
#include "main.h"

/**
 * word_len - Returns the length of a word.
 * @str: String to measure.
 * Return: Length of word.
 */
int word_len(char *str)
{
	int len = 0;

	while (str[len] && str[len] != ' ')
		len++;
	return (len);
}

/**
 * count_words - Counts number of words in string.
 * @str: The string to analyze.
 * Return: The number of words.
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 * Return: Array of strings or NULL.
 */
char **strtow(char *str)
{
	char **tab;
	int i, j, k, words;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	tab = malloc(sizeof(char *) * (words + 1));
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		while (*str == ' ')
			str++;
		k = word_len(str);
		tab[i] = malloc(sizeof(char) * (k + 1));
		if (tab[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(tab[j]);
			free(tab);
			return (NULL);
		}
		for (j = 0; j < k; j++)
			tab[i][j] = *str++;
		tab[i][j] = '\0';
	}
	tab[i] = NULL;
	return (tab);
}


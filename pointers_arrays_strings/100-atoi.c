#include "main.h"

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int res = 0;
	int started = 0; /* Flag to know if we started finding numbers */

	/* Iterate through the string */
	while (s[i] != '\0')
	{
		/* Check for signs ONLY if we haven't started reading digits yet */
		if (s[i] == '-' && started == 0)
			sign *= -1;

		/* Detect digits */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			/* Build the number */
			res = (res * 10) + (s[i] - '0');
		}

		/* If we encounter a non-digit after the number started, break */
		else if (started == 1)
			break;

		i++;
	}

	return (res * sign);
}



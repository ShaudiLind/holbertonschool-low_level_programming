/* 
 * If the loop finishes, it means one (or both) strings hit the null terminator.
 *  Compare the null terminators themselves. If they are both '\0', the 
 * result is 0.
 */


int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Loop until you hit the end of a string or find a mismatch */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/* If characters differ, return the difference immediately */
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}


	return (s1[i] - s2[i]);
}


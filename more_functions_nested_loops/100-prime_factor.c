#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 * @argc: argument count (unused)
 * @argv: argument vector (unused)
 *
 * Return: Always 0
 */
int main(void)
{
	long long n = 612852475143LL;
	long long largest_factor = 1;

	/* Divide out all factors of 2 */
	while (n % 2 == 0)
	{
		largest_factor = 2;
		n /= 2;
	}

	/* Check for odd factors from 3 onwards */
	for (long long i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largest_factor = i;
			n /= i;
		}
	}

	/* If n > 1, then it's a prime factor larger than sqrt(original_n) */
	if (n > 1)
	{
		largest_factor = n;
	}

	printf("%lld\n", largest_factor);

	return (0);
}

#include "main.h"

int check_prime(int n, int divisor);

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

/**
 * check_prime - recursive helper to find if n is divisible by any number
 * @n: the number to check
 * @divisor: the current number to divide by
 * Return: 1 if prime, 0 if not
 */
int check_prime(int n, int divisor)
{
	/* If n is divisible by current divisor, it's not prime */
	if (n % divisor == 0)
		return (0);

	/* Optimization: If divisor*divisor > n, no need to check further */
	if (divisor * divisor > n)
		return (1);

	/* Recursively check the next divisor */
	return (check_prime(n, divisor + 1));
}


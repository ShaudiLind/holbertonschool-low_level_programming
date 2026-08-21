#include "main.h"

int actual_sqrt(int n, int guess);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 * Return: the natural square root of n, or -1 if none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt(n, 0));
}

/**
 * actual_sqrt - recursive helper function to find the square root
 * @n: the number to check
 * @guess: the current guess being tested
 * Return: the square root or -1
 */
int actual_sqrt(int n, int guess)
{
	/* If the square of the guess equals n, we found it */
	if (guess * guess == n)
		return (guess);

	/* If the square of the guess exceeds n, no natural root exists */
	if (guess * guess > n)
		return (-1);

	/* Recursively check the next number */
	return (actual_sqrt(n, guess + 1));
}


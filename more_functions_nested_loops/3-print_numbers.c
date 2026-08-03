#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9
 *
 * Description: This function prints all single-digit numbers
 * (0 through 9) in ascending order, followed by a new line.
 * It uses a loop to iterate through the numbers and converts
 * each integer to its ASCII character representation by adding
 * the ASCII value of '0'. Only two calls to _putchar are made
 * in the source code.
 *
 * Return: Nothing
 */
void print_numbers(void)
{
    int i;

    i = 0;
    while (i <= 9)
    {
        _putchar(i + '0');
        i++;
    }
    _putchar('\n');
}

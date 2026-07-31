/*
 * 3-print_alphabets.c - Prints the alphabet in lowercase and uppercase
 */

#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints lowercase alphabet, then uppercase alphabet, followed by newline
 * Return: Always 0 (success)
 */
int main(void)
{
    char c;

    /* Print lowercase letters a-z */
    for (c = 'a'; c <= 'z'; c++)
        putchar(c);
    
    /* Print uppercase letters A-Z */
    for (c = 'A'; c <= 'Z'; c++)
        putchar(c);
    
    /* Print newline */
    putchar('\n');

    return (0);
}

#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/* Prototype for the mandatory _putchar function */
int _putchar(char c);

/* Prototype for Task 0 */
int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/* 
 * You will add the prototypes for Tasks 1, 2, and 3 here 
 * as you progress through the project.
 */

#endif /* VARIADIC_FUNCTIONS_H */


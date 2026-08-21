#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int (*op_func)(int, int);
	int num1, num2, result;
	char *operator;

	/* Check argument count */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	op_func = get_op_func(operator);

	/* Check if operator is invalid */
	if (!op_func || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* Check division/modulo by zero */
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);
	return (0);
}


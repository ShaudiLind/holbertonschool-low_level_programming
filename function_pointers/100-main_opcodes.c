#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 or 2 on error
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	unsigned char *ptr;

	/* Check for the correct number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/* Convert argument to integer */
	bytes = atoi(argv[1]);

	/* Check if number of bytes is negative */
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* Get the address of main and cast to unsigned char pointer */
	ptr = (unsigned char *)main;

	/* Loop through the bytes and print them */
	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", ptr[i]);
		/* Add a space if it is not the last byte */
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}


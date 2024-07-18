#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s num1 num2\n", argv[0]);
		return 1;
	}

	int status = system("./101-mul");

	if (status != 0)
	{
		fprintf(stderr, "Multiplication program failed with exit code %d\n", status);
		return status;
	}

	return 0;
}


#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of command-line arguments
 * @argv: command-line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int (*operation)(int, int);
int num1, num2;
/* Check for correct number of arguments */
if (argc != 4)
{
printf("Error\n");
exit(98);
}
/* Convert arguments to integers */
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
/* Get the function corresponding to the operator */
operation = get_op_func(argv[2]);
/* Check if the operator is valid */
if (!operation)
{
printf("Error\n");
exit(99);
}
/* Check for division/modulo by zero */
if ((*argv[2] == '/' && num2 == 0) || (*argv[2] == '%' && num2 == 0))
{
printf("Error\n");
exit(100);
}
/* Perform the operation and print the result */
printf("%d\n", operation(num1, num2));
return (0);
}

#include <stdio.h>

/**
 * print_program_name - prints its name
 * @argc: argument count
 * @argv: argument vector
 */
void print_program_name(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
}

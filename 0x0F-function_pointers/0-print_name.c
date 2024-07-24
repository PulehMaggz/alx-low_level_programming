#include "function_pointers.h"

/**
 * print_name - prints a name using a given function
 * @name: name to be printed
 * @f: pointer to the function to be used for printing
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}

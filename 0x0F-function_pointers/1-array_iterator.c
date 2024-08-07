#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array of integers
 * @size: the size of the array
 * @action: pointer to the function to be used on each element
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}

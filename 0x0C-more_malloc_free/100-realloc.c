#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: The pointer to the newly allocated memory, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int min_size, i;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
return (malloc(new_size));
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
min_size = (old_size < new_size) ? old_size : new_size;
for (i = 0; i < min_size; i++)
((char *)new_ptr)[i] = ((char *)ptr)[i];
free(ptr);
return (new_ptr);
}

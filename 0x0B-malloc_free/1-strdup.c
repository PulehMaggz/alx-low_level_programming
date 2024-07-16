#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails
 */
char *_strdup(char *str)
{
char *dup_str;
unsigned int len = 0;
unsigned int i;
if (str == NULL)
return (NULL);
/* Calculate the length of str */
while (str[len] != '\0')
len++;
/* Allocate memory for duplicate string (+1 for null terminator) */
dup_str = malloc((len + 1) * sizeof(char));
if (dup_str == NULL)
return (NULL);
/* Copy str to dup_str */
for (i = 0; i < len; i++)
dup_str[i] = str[i];
/* Add null terminator */
dup_str[len] = '\0';
return (dup_str);
}

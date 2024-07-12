#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to concatenate
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
while (*ptr != '\0')
ptr++;
while (*src != '\0' && n--)
*ptr++ = *src++;
*ptr = '\0';
return (dest);
}


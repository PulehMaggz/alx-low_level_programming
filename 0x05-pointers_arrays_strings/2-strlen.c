#include "main.h"

/**
* _strlen - Returns the length of a string.
* @s: Pointer to the string
*
* Return: The length of the string
*/
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}

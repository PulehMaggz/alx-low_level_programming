#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space in memory containing
 *         the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concat_str;
int len_s1 = 0, len_s2 = 0;
int i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/* Calculate lengths of s1 and s2 */
while (s1[len_s1] != '\0')
len_s1++;
while (s2[len_s2] != '\0')
len_s2++;
/* Allocate memory for concatenated string */
concat_str = malloc((len_s1 + len_s2 + 1) * sizeof(char));
if (concat_str == NULL)
return (NULL);
/* Copy s1 to concat_str */
for (i = 0; i < len_s1; i++)
concat_str[i] = s1[i];
/* Copy s2 to concat_str */
for (j = 0; j < len_s2; j++)
concat_str[len_s1 + j] = s2[j];
/* Add null terminator */
concat_str[len_s1 + len_s2] = '\0';
return (concat_str);
}

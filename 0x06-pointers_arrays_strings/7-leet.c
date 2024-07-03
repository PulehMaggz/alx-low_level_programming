#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string
 *
 * Return: pointer to the resulting string
 */
char *leet(char *s)
{
	char *c = s;
	char leet[] = {'4', '3', '0', '7', '1'};
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	int i;

	while (*c)
	{
		i = 0;
		while (letters[i])
		{
			if (*c == letters[i] || *c == letters[i] - 32)
				*c = leet[i];
			i++;
		}
		c++;
	}

	return (s);
}

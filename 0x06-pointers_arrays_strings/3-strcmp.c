/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: Positive integer if s1 is greater than s2,
 *         Negative integer if s1 is less than s2,
 *         0 if s1 matches s2.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i])
{
if (s1[i] == '\0')
return (0);
i++;
}
return (s1[i] - s2[i]);
}

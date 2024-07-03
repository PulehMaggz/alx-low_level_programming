/**
 * _strncpy - Copies at most n bytes of the string pointed by src to dest.
 * @dest: The destination buffer to copy to.
 * @src: The source string to copy from.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0'; /* Fill remaining dest with '\0' if n > length of src */
}
return dest;
}

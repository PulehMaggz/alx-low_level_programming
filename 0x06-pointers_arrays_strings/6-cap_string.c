/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to modify.
 *
 * Return: Pointer to the modified string @str.
 */
char *cap_string(char *str)
{
    char *ptr = str;
    int capitalize = 1; /* Capitalize next character */

    while (*ptr != '\0')
    {
        if (capitalize && *ptr >= 'a' && *ptr <= 'z')
            *ptr -= 32; /* Convert to uppercase */

        capitalize = 0;

        if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
            *ptr == ',' || *ptr == ';' || *ptr == '.' ||
            *ptr == '!' || *ptr == '?' || *ptr == '"' ||
            *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
            capitalize = 1; /* Next character should be capitalized */

        ptr++;
    }

    return str;
}

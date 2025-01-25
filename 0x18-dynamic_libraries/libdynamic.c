#include "main.h"
#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n) {
    return (n < 0 ? -n : n);
}

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
    int len = 0;
    while (s[len])
        len++;
    return len;
}

void _puts(char *s) {
    while (*s)
        _putchar(*s++);
}

char *_strcpy(char *dest, char *src) {
    char *temp = dest;
    while ((*dest++ = *src++))
        ;
    return temp;
}

int _atoi(char *s) {
    int num = 0;
    int sign = 1;

    // Skip leading spaces
    while (*s == ' ')
        s++;
    // Handle sign
    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+')
        s++;

    // Convert characters to integer
    while (*s >= '0' && *s <= '9') {
        num = num * 10 + (*s - '0');
        s++;
    }

    return sign * num;
}

char *_strcat(char *dest, char *src) {
    char *temp = dest;
    while (*dest)
        dest++;
    while (*dest++ = *src++)
        ;
    return temp;
}

char *_strncat(char *dest, char *src, int n) {
    char *temp = dest;
    while (*dest)
        dest++;
    while (n-- && *src)
        *dest++ = *src++;
    *dest = '\0';
    return temp;
}

char *_strncpy(char *dest, char *src, int n) {
    char *temp = dest;
    while (n-- && *src)
        *dest++ = *src++;
    while (n--)
        *dest++ = '\0';
    return temp;
}

int _strcmp(char *s1, char *s2) {
    while (*s1 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

char *_memset(char *s, char b, unsigned int n) {
    char *temp = s;
    while (n--)
        *s++ = b;
    return temp;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    char *temp = dest;
    while (n--)
        *dest++ = *src++;
    return temp;
}

char *_strchr(char *s, char c) {
    while (*s) {
        if (*s == c)
            return s;
        s++;
    }
    return NULL;
}

unsigned int _strspn(char *s, char *accept) {
    unsigned int len = 0;
    while (*s) {
        char *temp = accept;
        while (*temp) {
            if (*s == *temp)
                break;
            temp++;
        }
        if (!*temp)
            break;
        len++;
        s++;
    }
    return len;
}

char *_strpbrk(char *s, char *accept) {
    while (*s) {
        char *temp = accept;
        while (*temp) {
            if (*s == *temp)
                return s;
            temp++;
        }
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    if (!*needle)
        return haystack;
    while (*haystack) {
        char *h = haystack;
        char *n = needle;
        while (*h && *n && *h == *n) {
            h++;
            n++;
        }
        if (!*n)
            return haystack;
        haystack++;
    }
    return NULL;
}

#include "main.h"
#include <stddef.h>  // For NULL
#include <string.h>  // For strchr and other string functions

int _putchar(char c) {
    return (int)c;  // Just return the character for now as a placeholder
}

int _islower(int c) {
    return (c >= 'a' && c <= 'z');  // Check if it's lowercase
}

int _isalpha(int c) {
    return (_islower(c) || (c >= 'A' && c <= 'Z'));  // Check if it's alphabetic
}

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');  // Check if it's uppercase
}

int _isdigit(int c) {
    return (c >= '0' && c <= '9');  // Check if it's a digit
}

void _puts(char *s) {
    while (*s) {
        _putchar(*s++);
    }
}

char *_strcpy(char *dest, char *src) {
    char *temp = dest;
    while ((*dest++ = *src++));
    return temp;
}

int _atoi(char *s) {
    int num = 0;
    while (*s && _isdigit(*s)) {
        num = num * 10 + (*s++ - '0');
    }
    return num;
}

char *_strcat(char *dest, char *src) {
    char *temp = dest;
    while (*dest) dest++;
    while ((*dest++ = *src++));
    return temp;
}

char *_strncat(char *dest, char *src, int n) {
    char *temp = dest;
    while (*dest) dest++;
    while (n-- && (*dest++ = *src++));
    *dest = '\0';
    return temp;
}

char *_strncpy(char *dest, char *src, int n) {
    char *temp = dest;
    while (n-- && (*dest++ = *src++));
    return temp;
}

int _strcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

char *_memset(char *s, char b, unsigned int n) {
    char *temp = s;
    while (n--) {
        *s++ = b;
    }
    return temp;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    char *temp = dest;
    while (n--) {
        *dest++ = *src++;
    }
    return temp;
}

char *_strchr(char *s, char c) {
    while (*s) {
        if (*s == c) return s;
        s++;
    }
    return (c == '\0') ? s : NULL;
}

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    while (*s && strchr(accept, *s++)) count++;
    return count;
}

char *_strpbrk(char *s, char *accept) {
    while (*s) {
        if (strchr(accept, *s)) return s;
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    char *h, *n;
    while (*haystack) {
        h = haystack;
        n = needle;
        while (*n && (*h == *n)) {
            h++;
            n++;
        }
        if (!*n) return haystack;
        haystack++;
    }
    return NULL;
}


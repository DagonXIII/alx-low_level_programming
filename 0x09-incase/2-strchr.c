#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string
 *
 * @s: Pointer to the string to search
 * @c: Character to search for
 *
 * Return: Pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return s;
        }

        s++;
    }

    if (c == '\0')
    {
        return s;
    }

    return NULL;
}

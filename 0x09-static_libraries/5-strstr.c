#include "main.h"


/**
 * _strstr - Finds the first occurrence of the substring needle in the
 *           string haystack.
 *
 * @haystack: A pointer to the string to search.
 * @needle: A pointer to the substring to search for.
 *
 * Return: If the substring is found - a pointer to the beginning of the
 *         located substring. If the substring is not found - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
    char *haystack_ptr;
    char *needle_ptr;

    if (*needle == '\0')
        return (haystack);

    while (*haystack)
    {
        haystack_ptr = haystack;
        needle_ptr = needle;

        while (*needle_ptr && *needle_ptr == *haystack_ptr)
        {
            needle_ptr++;
            haystack_ptr++;
        }

        if (*needle_ptr == '\0')
            return (haystack);

        haystack++;
    }

    return (NULL);
}

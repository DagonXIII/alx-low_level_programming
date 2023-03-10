#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: Pointer to the string to search
 * @accept: Pointer to the string of characters to match
 *
 * Return: The length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j, count = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                count++;
                break;
            }
        }

        if (accept[j] == '\0')
        {
            return count;
        }
    }

    return count;
}

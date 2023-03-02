#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if the result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, carry = 0;
    char *p1 = n1, *p2 = n2, *pr = r;

    // Determine the lengths of n1 and n2
    while (*p1 != '\0')
    {
        len1++;
        p1++;
    }
    while (*p2 != '\0')
    {
        len2++;
        p2++;
    }

    // Check if the result can be stored in r
    if (len1 + len2 >= size_r)
    {
        return 0;
    }

    // Add the digits of n1 and n2 from right to left, storing the result in r
    p1 = n1 + len1 - 1;
    p2 = n2 + len2 - 1;
    pr = r + len1 + len2;
    *pr = '\0';
    pr--;
    while (p1 >= n1 || p2 >= n2)
    {
        int d1 = (p1 >= n1) ? (*p1 - '0') : 0;
        int d2 = (p2 >= n2) ? (*p2 - '0') : 0;
        int sum = d1 + d2 + carry;
        carry = sum / 10;
        *pr = (sum % 10) + '0';
        p1--;
        p2--;
        pr--;
    }
    if (carry > 0)
    {
        *pr = carry + '0';
    }
    else
    {
        pr++;
    }

    return pr;
}


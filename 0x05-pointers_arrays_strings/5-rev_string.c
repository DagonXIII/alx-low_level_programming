#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k;
	char *l, first;

	l = s;

	while (s[j] != '\0')
	{
		j++;
	}

	for (k = 1; k < j; k++)
	{
	l++;
	}

	for (i = 0; i < (j / 2); i++)
	{
	first = s[i];
	s[i] = *l;
	*l = first;
	l--;
	}
}

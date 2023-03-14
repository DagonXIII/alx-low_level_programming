#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory,
 * Contains copy of string given as parameter.
 * @str: source string
 *
 * Return: return pointer to duplicated string.
 * Return NULL if insufficient memory available
 */
char *_strdup(char *str)
{
	char *a;
	int i, point = 0;

	if (str == NULL)
		return (NULL);

	while (str[point] != '\0')
		point++;

	a = (char *)malloc((sizeof(char) * point) + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < point; i++)
		a[i] = str[i];
	a[point] = '\0';

	return (a);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - Concatenate two strings
  * @s1: the first string
  * @s2: the second string
  *
  * Return: pointer to newly allocated string
  */
char *str_concat(char *s1, char *s2)
{
	int i, j, q, w, e;
	char *a;

	q = w = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			q++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			w++;
	}

	e = q + w;
	a = (char *)malloc(sizeof(char) * (e + 1));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < q; i++)
		a[i] = s1[i];
	for (j = 0; j < w; j++, i++)
		a[i] = s2[j];
	a[e] = '\0';

	return (a);
}


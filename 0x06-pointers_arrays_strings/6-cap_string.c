#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: `str`
 */

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			switch (s[i - 1])
			{
				case ' ':
				case '\t':
				case '\n':
				case ',':
				case ';':
				case '.':
				case '!':
				case '?':
				case '\"':
				case '(':
				case ')':
				case '{':
				s[i] -= 32;
				break;
			}
		}
	}

	return (s);
}


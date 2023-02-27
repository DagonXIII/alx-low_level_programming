#include "main.h"

/**
* _atoi - Convert a string to an integer.
* @s: The pointer to convert
*
* Return: A integer
*/
int _atoi(char *s)
{
	int i = 0;
	unsigned int ni = 0;
	int min = 1;
	int a = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			a = 1;
			ni = (ni * 10) + (s[i] - '0');
			i++;
		}

		if (a == 1)
		{
			break;
		}

		i++;
	}

	ni *= min;
	return (ni);
}


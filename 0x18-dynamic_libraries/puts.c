#include "main.h"

void _puts(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int amount = 0;
	char startingLetter = 'a';

	while (amount < 10)
	{
		startingLetter = 'a';
		while (startingLetter <= 'z')
		{
			_putchar(startingLetter);
			startingLetter++;
		}
		_putchar('\n');

		amount++;
	}
}

#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[9] = "_putchar";
	int a = 0;

	for (a = 0; a < 8; a++)
	{
		_putchar(text[a]);
	}
	_putchar('\n');

	return (0);
}

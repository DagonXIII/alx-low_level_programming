#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	long int a;
	long int first, second;
	int b;

	a = 0;
	first = 0;
	second = 1;
	b = 0;

	while (b < 49)
	{
		a = first + second;
		printf("%li, ", a);
		first = second;
		second = a;

		b++;
	}
	a = first + second;
	printf("%li\n", a);

	return (0);
}

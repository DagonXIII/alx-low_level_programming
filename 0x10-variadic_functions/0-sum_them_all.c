#include "variadic_functions.h"

/**
 * sum_them_all - adds all numbers
 * @n: number of parameters
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list firstlist;

	va_start(firstlist, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(firstlist, int);

	va_end(firstlist);

	return (sum);
}

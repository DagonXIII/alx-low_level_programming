#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number containing the bit to be checked
 * @index: the index of the bit to be checked
 *
 * Return: the value of the bit at index index or -1 if there was an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}

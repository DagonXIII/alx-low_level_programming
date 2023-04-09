#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the number containing the bit to be set
 * @index: the index of the bit to be set
 *
 * Return: 1 if it worked, or -1 if there was an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= 1ul << index;
	return (1);
}

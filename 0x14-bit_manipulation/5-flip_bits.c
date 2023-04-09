#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int wanted_result;
	unsigned int number = 0;

	wanted_result = n ^ m;

	while (wanted_result != 0)
	{
		if (wanted_result & 1)
			number++;
		wanted_result >>= 1;
	}

	return (number);
}

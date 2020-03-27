#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - setsthe value of a bit to 1.
 * @n: number to evaluate
 * @index: position returned
 * Return: 1 on succes.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * sizeof(unsigned int)))
	{
		return (-1);
	}

	if (!((*n << index) & 1))
	*n ^= (1 << index);

	return (1);
}

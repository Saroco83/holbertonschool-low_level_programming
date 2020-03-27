#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - sets the value.
 * @n: number to evaluate
 * @index: value tu retur
 * Return: 1 on succes
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * sizeof(unsigned int)))
	{
		return (-1);
	}
	if (!((*n << index) & 0))
	{
		*n = *n & ~(11 << index);
	}

	return (1);
}

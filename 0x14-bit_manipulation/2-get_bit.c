#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - function to excute.
 * @n: firsth parameter
 * @index: value to evaluate
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * sizeof(unsigned int)))
	{
		return (-1);
	}
	if ((n >> index) & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - function to evaluate
 * @n: firsth parameter
 * @m: second parameter
 * Return: bits fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int leo;

	leo = n ^ m;
	while (leo > 0)
	{
		if ((leo > 0))
		{
			count++;
		}
		leo >>= 1;
	}
	return (count);
}

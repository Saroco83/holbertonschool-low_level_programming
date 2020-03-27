#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - function to print.
 * @n: number to print.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if (n & 1)
	{
		_putchar(1 + 48);
	}
	else
	{
		_putchar(0 + 48);
	}
}

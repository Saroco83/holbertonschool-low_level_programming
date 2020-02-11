#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - Function ppal.
 * Return: 0 on succes
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return(1);
	}
	if (n == 0)
	{
		_putchar(0);
		return(0);
	}
	if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	return (0);
}

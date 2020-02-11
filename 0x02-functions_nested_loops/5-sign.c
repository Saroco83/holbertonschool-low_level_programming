#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_sign - print sign.
 * Return: -1, 0, 1.
 * @n: integer to evaluate.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
		return (-1);
}

#include "holberton.h"
#include <stdio.h>
/**
 * _pow_recursion - recursive function
 * @x: base to be raised
 * @y: number to be raised
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (_pow_recursion(x, y - 1) * x);
	}
	return (0);
}

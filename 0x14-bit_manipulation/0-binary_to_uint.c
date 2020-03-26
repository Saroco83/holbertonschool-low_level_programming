
#include <stdio.h>
#include "holberton.h"

int _pow_recursion(int x, int y);

/**
 * binary_to_uint - function change base.
 * @b: value to chabge
 * Return: number changed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decNum = 0, count = 0, len = 0, num = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len])
	{
		len++;
	}
	for (count = 0; b[count]; count++, len--)
	{
		if (b[count] == 48)
		{
			num = 0;
		}
		else if (b[count] == 49)
		{
			num = 1;
		}
		else
		{
			return (0);
		}
		decNum = decNum + (num * _pow_recursion(2, (len - 1)));
	}
	return (decNum);
}
/**
 * _pow_recursion - function to raise to number
 * @x: base number
 * @y: raiser number
 * Return: value powered
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (x == 0)
	{
		return (0);
	}
	return (x * _pow_recursion(x, y - 1));
}

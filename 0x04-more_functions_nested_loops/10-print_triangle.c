#include "holberton.h"
#include <stdio.h>
/**
 * print_triangle - print triangle.
 * @size: parameter to process.
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (z = 1; z <= size; z++)
		{
			for (x = size; x > z; x--)
			{
				_putchar('_');
			}
			for (y = 0; y < z; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

#include "holberton.h"
/**
 * print_line - prints __.
 * @n: numbers of impretions
 */
void print_line(int n)
{
	int x;

	for (x = 1 ; x <= n; x++)
	{
		if (n >= 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

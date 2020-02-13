#include "holberton.h"
/**
 * print_most_numbers - numbers wit out 0 - 9.
 *
 */
void print_most_numbers(void)
{
	int z;

	for (z = 0; z <= 9; z++)
	{
		if (z != 2 && z != 4)
		{
			_putchar(z + 48);
		}
	}
	_putchar('\n');
}

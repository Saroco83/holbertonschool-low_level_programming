#include "holberton.h"
/**
 * more_numbers - print incrementing the size of digit.
 */
void more_numbers(void)
{
	int z, y;

	for (z = 0; z < 10; z++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + 48);
			}
			_putchar((y % 10) + 48);
		}
		_putchar('\n');
	}

}

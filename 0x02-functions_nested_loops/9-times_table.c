#include "holberton.h"
/**
 * times_table - print multiplication chart
 */
void times_table(void)
{
	int z = 0, x = 0, y = 0;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			z = y * x;
			if (x != 0 && z < 10)
			{
				_putchar(' ');
			}
			if (z < 10)
			{
				_putchar(z + 48);
			}
			else
			{
				_putchar((z / 10) + 48);
				_putchar((z % 10) + 48);
			}
			if (x != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

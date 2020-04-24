#include <stdio.h>
/**
 * main - function ppal
 * Return: 0 on succes
 */
int main(void)
{
	int y, div;
	long e = 0, f = 1, g, ac = 0;

	for (y = 1; y < 33; y++)
	{
		g = e + f;
		div = g;
		if (div % 2 == 0)
		{
			ac = ac + g;
		}
		e = f;
		f = g;
	}
	printf("%.ld\n", ac);
	return (0);
}

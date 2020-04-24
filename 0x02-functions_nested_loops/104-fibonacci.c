#include <stdio.h>
/**
 * main - function ppal
 *
 * Return: Always 0;
 */
int main(void)
{
	int i;
	float e, f, g;

	e = 1;
	f = 2;

	printf("%.0f, ", e);
	printf("%.0f", f);
	for (i = 0; i < 96; i++)
	{
		g = e + f;
		printf(", %.0f", g);
		e = f;
		f = g;
	}
	putchar('\n');
	return (0);
}

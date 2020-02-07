#include <stdio.h>
/**
 * main - function ppal.
 * Return: 0 on succes.
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
		putchar(i);
		putchar(j);

			if
			(i != 57 || j != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}

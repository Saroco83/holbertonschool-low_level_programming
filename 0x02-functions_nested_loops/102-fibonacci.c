#include <stdio.h>
/**
 * main - function ppal
 * Return: 0 on succes
 *
 */
int main(void)
{
	long  x = 0, y = 1, starter;
	int i;

	for (i = 1; i <= 50; i++)
	{
		starter = x + y;
		if (i != 50)
		{
			printf("%.ld, ", starter);
		}
		else
		{
			printf("%.ld\n", starter);
		}
		x = y;
		y = starter;
	}
	return (0);
}

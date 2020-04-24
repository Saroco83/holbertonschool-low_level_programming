#include <stdio.h>
/**
 * main - function ppal
 * Return: 0 on succes
 *
 *
 */
int main(void)
{
	int  leo, b = 0;

	for (leo = 0; leo < 1024; leo++)
	{
		if (leo % 3 == 0 || leo % 5 == 0)
		{
			b += leo;
		}
	}
	printf("%d\n", b);
	return (0);
}

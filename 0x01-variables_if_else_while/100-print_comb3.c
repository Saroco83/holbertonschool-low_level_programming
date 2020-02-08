#include <stdio.h>
/**
 *main - function ppal.
 *Return: 0 for succes.
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if
			(a < b && a != b)
			{
				putchar(a);
				putchar(b);
				if
				(a != 56 || b != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

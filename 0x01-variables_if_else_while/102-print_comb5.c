#include <stdio.h>
/**
 *main - function ppal.
 *Return: 0 for succes.
 */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for(d = 48; d <= 57; d++)
				{
//				if
//					(a < b && a != b && b < c && b != c && a < c && a != c)
//				{
					putchar(a);
					putchar(b);
					putchar(c);
					putchar(d);
//					if
//					(a != 55 || b != 56 || c != 57)
//					{
						putchar(44);
						putchar(32);
//					}
//				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 *main - function ppal.
 *Return: 0 for succes.
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				
			//	if
			//	(a < b && a != b && b < c && b != c && a < c && c !=:)
			//	{
					putchar(a);
					putchar(b);
					putchar(c);
			//		if
			//		(a != 56 || b != 57)
			//		{
						putchar(44);
						putchar(32);
			//		}
			//	}
			}
		}
	}
	putchar('\n');
	return (0);
}

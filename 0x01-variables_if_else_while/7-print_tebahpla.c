#include <stdio.h>
/**
 *main - functim ppal.
 *Return: On succes return 0.
 */
int main(void)
{
	char alph;

	for (alph = 'z' ; alph >= 'a' ; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}

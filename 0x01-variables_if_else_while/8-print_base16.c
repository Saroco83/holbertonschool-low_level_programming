#include <stdio.h>
/**
 *main - functim ppal.
 *Return: On succes return 0.
 */
int main(void)
{
	char alph;
	int num;

	for (num = 48 ; num <= 57 ; num++)
	{
		putchar(num);
	}
	for (alph = 'a' ; alph <= 'f' ; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}

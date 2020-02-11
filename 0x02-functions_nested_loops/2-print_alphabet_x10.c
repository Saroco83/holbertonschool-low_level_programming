#include "holberton.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - 10 times alphabeth.
 * Return: No return.
 */
void print_alphabet_x10(void)
{
	char alph;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (alph = 'a' ; alph <= 'z' ; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}

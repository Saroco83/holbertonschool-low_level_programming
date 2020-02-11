#include "holberton.h"
#include <stdio.h>
/**
 * print_alphabet - ascii code to print.
 * Return: On succes return 0.
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}

#include "holberton.h"
/**
 * print_rev - fuction to print in reverse.
 * @s: parameter to print.
 */
void print_rev(char *s)
{
	int i = 0, j = 0;

	while (s[i])
	{
		i++;
	}
	j = i;
	while (s[j - 1])
	{	j--;
		_putchar(s[j]);
	}
	_putchar('\n');
}

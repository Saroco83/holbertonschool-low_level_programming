#include "holberton.h"
#include <stdio.h>
/**
 * _print_rev_recursion - reverse printning recursive
 * @s: pointer parameter to string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

#include "holberton.h"
/**
 * _puts_recursion - function to recursivity
 * @s: pointer parameter to string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}

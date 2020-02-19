#include "holberton.h"
/**
 * puts_half - function
 * @str: parameter
 *
 */
void puts_half(char *str)
{
	int a = 0, length_of_the_string  = 0, n = 0;

	length_of_the_string = _strlen(str);

	if (a % 2 != 0)
	{
		n = (length_of_the_string - 1) / 2;
	}
	else
	(n = length_of_the_string / 2);

	_puts(str + n);
}

#include "holberton.h"
/**
 * puts_half - function
 * @str: parameter
 *
 */
void puts_half(char *str)
{
	int a = 0, length_of_the_string  = 0, n = 0, i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	length_of_the_string = i;

	if (a % 2 != 0)
	{
		n = (length_of_the_string - 1) / 2;
	}
	else
	(n = length_of_the_string / 2);
	i = n;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

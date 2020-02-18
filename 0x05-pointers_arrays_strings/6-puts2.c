#include "holberton.h"
/**
 * puts2 - function to evaluate
 * @str: string as parameter
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		i++;
	}
		_putchar('\n');
}

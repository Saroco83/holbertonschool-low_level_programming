#include "holberton.h"
/**
 * print_last_digit - calculate las number.
 * Return: residual of evaluate value.
 * @num: integer coming from previous function.
 *
 */
int print_last_digit(int num)
{
	int res = 0, abs = 0;

	if (num < 0)
	{
		abs = num * (-1);
		res = abs % 10;
		_putchar(res + 48);
		return (res);
	}
	else
	{
		res = num % 10;
		_putchar(res + 48);
		return (res);
	}
	return(0);
}

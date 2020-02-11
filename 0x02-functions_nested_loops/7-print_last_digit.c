#include "holberton.h"
/**
 * print_last_digit - calculate las number.
 * Return: residual of evaluate value.
 * @num: integer coming from previous function.
 *
 */
int print_last_digit(int num)
{
	int res = 0, nosig = 0;

	nosig = _abs(num);
	res = nosig % 10;
	_putchar(res + '0');
	return (res);
}

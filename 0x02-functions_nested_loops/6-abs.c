#include "holberton.h"
/**
 * _abs - absolute value fuction.
 * Return: integer 0 on succes.
 * @a: parameter integer.
 */

int _abs(int a)
{
	int b;

	if (a < 0)
	{
		b = -1 * a;
		return (b);
	}
	return (a);
}

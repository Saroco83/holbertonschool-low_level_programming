#include "holberton.h"
#include <stdio.h>
/**
 * _islower - compares the value of chart.
 * @c: parmeter integer with ascii of char.
 * Return: 1 if succes.
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

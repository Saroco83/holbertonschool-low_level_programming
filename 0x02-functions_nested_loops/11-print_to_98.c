#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - function in printing
 * @n: parameter of value
 * Return: 1 on succes or -1 if fails
 *
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
		}
	}
	else
	{
		for ( ; n >= 98; n--)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
		}
	}
}

#include "holberton.h"
#include <stdio.h>
/**
 * factorial - function to recursion
 * @n: parameter of integer to calculate factorial
 * Return: integer
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
	return (factorial(n - 1) * n);
	}
	return (0);
}

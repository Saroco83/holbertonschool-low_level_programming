#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function to add all parameters.
 * @n: number of parameters
 * Return: Always 0 on succes.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list values;
	int suma = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(values, n);
	for (i = 0; i < n; i++)
	{
		suma += va_arg(values, int);
	}
	va_end(values);
	return (suma);
}

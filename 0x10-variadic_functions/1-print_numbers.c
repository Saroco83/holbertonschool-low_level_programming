#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function to print n integersas parameters.
 * @separator: pointer to string.
 * @n: number of parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list values;
	unsigned int i = 0;

	va_start(values, n);
	if (separator)
	{
		while (i < n)
		{
			printf("%d", (va_arg(values, unsigned int)));
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
			i++;
		}
	}
	va_end(values);
	printf("\n");
}

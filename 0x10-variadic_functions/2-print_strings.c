#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - function to print string.
 * @separator: pointer to string
 * @n: number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c = NULL;
	va_list string;

	va_start(string, n);
	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			c = va_arg(string, char*);
			if (c)
			{
				printf("%s",c);
				if (i < (n - 1))
				{
					printf("%s", separator);
				}
			}
			else
			{
				printf("(nil)");
				if (i < (n - 1))
				{
					printf("%s", separator);
				}
			}
		}
	}
	va_end(string);
	printf("\n");
}

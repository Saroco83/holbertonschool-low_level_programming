#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list arguments;
	char *str = NULL;
	
	va_start(arguments, format);
	while (format[i])
	{
		switch(format[i])
		{
			case 'c':
			printf("%c", (char)va_arg(va_list, int));
			break;
			case 'i':
			printf("%i", (va_arg(va_list, int)));
			break;
			case 'f':
			printf("%f", (float)va_arg(va_list, int));
			break;
			case 's':
			if(str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		
	}
}

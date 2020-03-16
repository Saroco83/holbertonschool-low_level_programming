#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - functio to execute
 * @format: list
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list arguments;
	char *str = NULL;

	va_start(arguments, format);
	while (format[j] != '\0')
	{
		j++;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
			printf("%c", (char)va_arg(arguments, int));
			break;
			case 'i':
			printf("%i", va_arg(arguments, int));
			break;
			case 'f':
			printf("%f", (float)va_arg(arguments, int));
			break;
			case 's':
			str = va_arg(arguments, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's') && (i < (j - 1)))
		{
			printf(", ");
		}
		i++;
	}
	va_end(arguments);
	printf("\n");
}

#include "holberton.h"
/**
 * string_toupper - function to change to capCasse.
 * @n: pointer parameter to string.
 * Return: char pointer to string.
 */
char *string_toupper(char *n)
{
	int i = 0;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);

}

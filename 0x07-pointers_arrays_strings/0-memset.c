#include "holberton.h"
/**
 * _memset - function to write array
 * @s: pointer to array
 * @b: char hexagecimal
 * @n: integer unsigned
 * Return: pointer to array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}

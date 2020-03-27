#include <stdio.h>
#include "holberton.h"
/**
 * get_endianness - function to get indianess
 * Return: integer
 */
int get_endianness(void)
{
	unsigned int s = 1;
	char *c = (char *)&s;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

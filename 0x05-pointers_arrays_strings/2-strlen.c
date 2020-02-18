#include "holberton.h"
/**
 * _strlen - count a string
 * @s: parameter of string
 * Return: value evaluated
 */
int _strlen(char *s)
{
	int i = 0;

	while ( s[i] != '\0')
	{
		i++;
	}
	return(i);
}

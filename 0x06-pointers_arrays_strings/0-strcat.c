#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - function to joint to strings.
 * @dest: destiny string parameter.
 * @src: source string parameter.
 * Return: dest pointer.
 */
char *_strcat(char *dest, char *src)
{
	int k = 0;
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{	}

	for (j = 0; src[j] != '\0'; j++)
	{	}

	for (; src[k] != '\0'; k++);
	{
		dest[i + k] = src[k];
	}
	dest[i + j] = '\0';
	return (dest);
}

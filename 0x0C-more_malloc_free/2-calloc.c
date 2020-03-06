#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function emulated
 * @nmemb: amounth of bytes
 * @size: bytes of variable type
 * Return: pointer void type
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (nmemb * size); i++)
	{
		array[i] = 0;
	}
	return (array);
}

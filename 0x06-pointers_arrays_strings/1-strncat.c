#include "holberton.h"
/**
 * _strncat - function.
 * @dest: string of destiny.
 * @src: string source.
 * @n: size of array.
 * Return: char pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;
	
	for (i = 0; dest[i] != '\0'; i++)
	{
		
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		
	}
	while(j < n && j < k)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return(dest);
}

#include "holberton.h"
/**
 * _memcpy - function to copy
 * @dest: pointer to copy on
 * @src: pointer to copy from
 * @n: integer to limit the copy
 * Return: pointer to array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count1 = 0;

	while (count1 < n)
	{
		dest[count1] = src[count1];
		count1++;
	}
	return (dest);
}

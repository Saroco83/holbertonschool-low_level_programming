#include <stdio.h>
#include <stdlib.h>
/**
 * array - function to create array
 * @min: fewer number
 * @max: higher number
 * Return: pointer to integer
 */
int *array_range(int min, int max)
{
	int *leo = NULL;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	leo = malloc(size * 4);
	if (leo == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		leo[i] = i;
	}
	return (leo);
}

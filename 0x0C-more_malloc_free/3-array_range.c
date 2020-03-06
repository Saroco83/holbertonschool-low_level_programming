#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function to create array
 * @min: fewer number
 * @max: higher number
 * Return: pointer to integer
 */
int *array_range(int min, int max)
{
	int *leo = NULL;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	leo = malloc((max - min + 1) * sizeof(int));
	if (leo == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= (max - min); i++)
	{
		leo[i] = min + i;
	}
	return (leo);
}

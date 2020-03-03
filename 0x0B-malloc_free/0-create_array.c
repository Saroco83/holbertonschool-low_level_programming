#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - allocation function
 * @size: array size
 * @c: char to initialize
 * Return: pointer to memory allocated
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

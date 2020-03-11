#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - function called
 * @array: poinyter to string
 * @size: array lengh
 * @action: function pointer as parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t run = 0;

	for (run = 0; run < size; run++)
	{
		(*action)(array[run]);
	}
}

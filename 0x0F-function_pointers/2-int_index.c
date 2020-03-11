#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function receiving function pointer
 * @array: pointer to integer string
 * @size: integer parameter of array size
 * @cmp: function pointer
 * Return: Integer with position of coincidence
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int run;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (run = 0; run < size; run++)
		{
			if ((*cmp)(array[run]))
			{
				return (run);
			}
		}
	}
	return (-1);
}

#include "holberton.h"
/**
 * reverse_array - function to reverse
 * @a: pointer parameter to array
 * @i: parameter size array
 */
void reverse_array(int *a, int i)
{
	int j = 0, k = 0, b = 0;

	j = i - 1;
	while (j >= i / 2)
	{
		b = a[k];
		a[k] = a[j];
		a[j] = b;
		k++;
		j--;
	}
}

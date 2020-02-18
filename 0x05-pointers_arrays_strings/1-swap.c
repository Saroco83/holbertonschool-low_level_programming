#include "holberton.h"
/**
 * swap_int - function to exange.
 * @a: parameter.
 * @b: parameter.
 */
void swap_int(int *a, int *b)
{
	int c;

	(c = *a);
	(*a = *b);
	(*b = c);
}

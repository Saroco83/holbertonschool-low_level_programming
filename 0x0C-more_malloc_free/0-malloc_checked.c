#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - creates memory and return void pointer or 98
 * @b: value positive to allocate
 * Return: pointer to polsition allocated
 */
void *malloc_checked(unsigned int b)
{
	void *alloc = NULL;

	alloc = (void *) malloc(b);
	if (alloc == NULL)
	{
		exit (98);
	}
	return (alloc);
}

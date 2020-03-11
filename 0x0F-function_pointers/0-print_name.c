#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function to call function pointer
 * @name: pointer to string parameter
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);

}

#include <stdio.h>
#include "holberton.h"
/**
 * main - function ppal
 *
 * Return: 0 always
 */
int main(void)
{
	char a[10] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(a[i]);
	}
	putchar('\n');
	return (0);
}

#include "holberton.h"
#include <stdio.h>
int prime_parmtr(int a, int b);
/**
 * is_prime_number - function ppal
 * @n: number to test
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	int b = 2;

	if (prime_parmtr(n, b))
	{
		return (1);
	}
	else
	return (0);
}

/**
 * prime_parmtr - secondary function
 * @a: value to test
 * @b: value to initialize the function
 * Return: values if its true or false
 */

int prime_parmtr(int a, int b)
{
	if (a <= b)
	{
		return (0);
	}
	if (a % b == 0)
	{
		return (0);
	}
	if (b * b > a)
	{
		return (1);
	}
	return (prime_parmtr(a, b + 1));
}

#include "holberton.h"
#include <stdio.h>

int sqrt_parmtr(int n, int parmtr);
/**
 * sqrt_parmtr - recursive function
 * @n: parameter 1
 * @parmtr: parameter to str the iteration
 * Return: value of square
 */
int _sqrt_recursion(int n)
{
	int parmtr = 1;
	int m;

	m = sqrt_parmtr(n, parmtr);
	return (m);
}
int sqrt_parmtr(int n, int parmtr)
{
	if (parmtr > n)
	{
		return (-1);
	}
	if (parmtr * parmtr == n)
	{
		return (parmtr);
	}
	else
	return (sqrt_parmtr(n, parmtr  + 1));
}

#include "holberton.h"
#include <stdio.h>

/**
 * _sqrt_recursion - recursive function
 * @n: parameter 1
 * @parmtr: parameter to str the iteration
 * Return: value of square
 */
int sqrt_parmtr(int n, int parmtr);
int _sqrt_recursion(int n)
{
	int parmtr = 1;
	int m;

	m = sqrt_parmtr(n, parmtr);
	return (m);
}
/**
 * sqrt_parmtr - second function to program
 * @n: parameter
 * @parmtr: parameter
 * Return: value of root
 */
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

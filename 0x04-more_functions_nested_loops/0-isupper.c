#include "holberton.h"
/**
 * _isupper - checks if the parameter is upper.
 * @c: paramenter to evaluate.
 * Return: 1 on succes or 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return(1);
	}
	return(0);
}

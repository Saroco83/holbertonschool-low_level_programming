#include "holberton.h"
#include <stdio.h>
/**
 * _isalpha - compares the value of char in ascii..
 * @c: parmeter integer with ascii of char.
 * Return: 1 if succes or 0 otherwise.
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

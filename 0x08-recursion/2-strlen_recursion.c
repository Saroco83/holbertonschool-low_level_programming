#include "holberton.h"
#include <stdio.h>
/**
 * _strlen_recursion - fuction with recursion to count the lengh
 * @s: pointer parameter to string
 * Return: len inter of lengh string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
	return (_strlen_recursion(s + 1) + 1);
	}
	return (len);
}

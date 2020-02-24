#include "holberton.h"
/**
 * _strcmp - function to compare
 * @s1: string 1 to compare
 * @s2: string 2 to compare
 * Return: integer. 0 on succes != of 0 if diferent
 */
int _strcmp(char *s1, char *s2)
{
	int inc = 0, difrnc = 0;

	do {
		difrnc = s1[inc] - s2[inc];
		inc++;
	} while (s1[inc] != '\0' && s1[inc] == s2[inc]);
	return (difrnc);
}

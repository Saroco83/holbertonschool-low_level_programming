#include "holberton.h"
/**
 * _strchr - function to return pointer to char
 * @s: pointer parameter to string
 * @c: value of char
 * Return: pointer s
 */
char *_strchr(char *s, char c)
{
	int count = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == c)
		{
			return (&s[count]);
		}
		if(s[count + 1] == '\0')
		{
		return (&s[count + 1]);
	}
	return (s);
}

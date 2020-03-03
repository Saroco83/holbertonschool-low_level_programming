#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function to creates and fill array
 * @str: pointer to array source
 * Return: pointer to new array filled
 */
char *_strdup(char *str)
{
	int fill, len = 0;
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}
	for ( ; str[len] != '\0'; len++)
	{}
	newstr = malloc(len * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (fill = 0; fill < len; fill++)
	{
		newstr[fill] = str[fill];
	}
	return (newstr);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - join to strings
 * @s1: firsth string
 * @s2: second string
 * @n: number to cut
 * Return: pointer to allocated and filled memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int fill1, countS1, countS2;
	char *secondstr;

	if (s1 == '\0')
	{
		s1 = "";
	}
	if (s2 == '\0')
	{
		s2 = "";
	}
	for (countS1 = 0; s1[countS1] != '\0'; countS1++)
	{}
	for (countS2 = 0; s2[countS2] != '\0'; countS2++)
	{}
	if (n >= countS2)
	{
		n = countS2;
	}
	secondstr = malloc(sizeof(char) * (countS1 + n + 1));
	if (secondstr == NULL)
	{
		return (NULL);
	}
	for (fill1 = 0; s1[fill1] != '\0'; fill1++)
		secondstr[fill1] = s1[fill1];
	for (fill1 = 0; fill1 < n; fill1++)
		secondstr[fill1 + countS1] = s2[fill1];
	secondstr[countS1 + fill1] = '\0';
	return (secondstr);
}

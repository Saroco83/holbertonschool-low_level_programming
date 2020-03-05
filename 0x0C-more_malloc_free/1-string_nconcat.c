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
	int fill1, fill2, size2ndstr;
	unsigned int countS1, countS2;
	char *secondstr;

	if ((s1 == NULL) || (s2 == NULL))
		return ("");
	for (countS1 = 0; s1[countS1] != '\0'; countS1++)
	for (countS2 = 0; s2[countS2] != '\0'; countS2++)
	if (n <= (countS2))
	{
		secondstr = malloc(sizeof(char) * (countS1 + n + 1));
		if (secondstr == NULL)
			return ("");
		size2ndstr = countS1 + n;
	}
	else
	{
		secondstr = malloc(sizeof(char) * (countS1 + countS2 + 1));
		if (secondstr == NULL)
			return ("");
		size2ndstr = countS1 + countS2;
	}
	for (fill1 = 0; s1[fill1] != '\0'; fill1++)
		secondstr[fill1] = s1[fill1];
	for (fill2 = 0; (fill1 + fill2) <= size2ndstr; fill2++)
		secondstr[fill1 + fill2] = s2[fill2];
	secondstr[fill1 + fill2] = '\0';
	return (secondstr);
}

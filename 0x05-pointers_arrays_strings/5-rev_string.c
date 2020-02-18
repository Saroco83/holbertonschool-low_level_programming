#include <stdio.h>
#include "holberton.h"
/**
 * rev_string - reverse a string.
 * @s: string parameter.
 *
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char temp;

	while (s[i])
	{
		i++;
	}
	j = i - 1;
	while (j >= i / 2)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}

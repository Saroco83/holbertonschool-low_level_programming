#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to string parameter
 * Return: s pointer
 */
char *cap_string(char *s)
{
	char k[14] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};
	int  a = 0, b = 0;

	while (s[a] != '\0')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;
		while (k[b] != '\0')
		{
			if (s[a] == k[b])
			{
				if ((s[a + 1] >= 'a') && (s[a + 1] <= 'z'))
				{
					s[a + 1] = s[a + 1] - 32;
				}
			}
			b++;
		}
		a++;
	}
	return (s);
}

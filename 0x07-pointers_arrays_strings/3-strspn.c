#include "holberton.h"
/**
 * 
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ret = 0;
	int i = 0, j = 0, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if(s[i] == accept[j])
			{
				ret++;
				flag = 1;
			}
		}
		if(flag == 0)
		{
			break;
		}
	}
	return (ret);
}

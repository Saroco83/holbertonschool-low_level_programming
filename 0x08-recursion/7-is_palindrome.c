#include "holberton.h"
#include <stdio.h>
int _strlen_recursion(char *s);
/**
 *
 *
 *
 */
int is_palindrome(char *s)
{
	
	int len = 0;

	len = _strlen_recursion(s);
	if (len = 0)
	{
		return (1);
	}
	pali_rec_parmtr(s + 1, len);
}





int _strlen_recursion(char *s)
{
	int len = 0;

        if (*s != '\0')
        {
        return (_strlen_recursion(s + 1) + 1);
        }
        return (len);
}

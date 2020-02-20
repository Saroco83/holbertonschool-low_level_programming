#include "holberton.h"
/**
 * _strncpy - function to copy string.
 * @dest: string to hold the 2nd string.
 * @src: string source.
 * @n: parameter to allocate the memory.
 * Return: string result pointer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	
              int i;

               for (i = 0; i < n && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < n; i++)
                   dest[i] = '\0';

               return(dest);
 
}

#include <unistd.h>
#include "holberton.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int _strlen(char *s);
/**
 * append_text_to_file - Function to add at end
 * @filename: file name
 * @text_content: text source
 * Return: status.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int leo;
	
	if (!filename)
	{
		return (-1);
	}
	leo = open(filename, O_RDWR | O_APPEND, 0600);
	if (!text_content)
	{
		return(1);
	}
	if (leo == -1)
	{
		return (-1);
	}
	else
	{
		write(leo, text_content, _strlen(text_content));
	}
	close(leo);
	return (1);
}
/**
 * _strlen - function tu counter
 * @s: pointer to string
 * Return: len of string
 */
int _strlen(char *s)
{
        int c = 0;

        while (*s != '\0')
        {
                c++;
                s++;
        }
        return (c);
}

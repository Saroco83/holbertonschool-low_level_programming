#include <unistd.h>
#include "holberton.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int _strlen(char *s);
/**
 * create_file - function to create file
 * @filename: pointer to name
 * @text_content: pounter to content
 * Return: status
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (!filename)
	{
		return (-1);
	}
	if (!text_content)
	{
		return (1);
	}
	if (fd == -1)
	{
		return (-1);
	}
	else
	{
		write(fd, text_content, strlen(text_content));
	}
	close(fd);
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

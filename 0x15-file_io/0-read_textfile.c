#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 * 
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *space;
	ssize_t num-byt, av-byt;

	if (!filename)
	{
		return (0);
	}
	space = malloc(sizeof(size_t) * letters);
	if (!space)
	{
		return ('\0');
	}
	if (fd == 1)
	{
		free(space);
		return(0);
	}
	else
	{
		num-byt = read(fd, space, letter)
		if (num-byt == -1)
		{
			free(space);
			return (0);
		}
		av-byt = write(STDOUT_FILENO, space, num-byt);
		if (num-byt == -1)
		{
			free(space);
			return (0);
		}
		close(fd);
	}
	return(av-byt);
}

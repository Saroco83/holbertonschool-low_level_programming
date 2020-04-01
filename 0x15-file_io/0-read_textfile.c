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
	ssize_t num_byt, av_byt;

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
		num_byt = read(fd, space, letters);
		if (num_byt == -1)
		{
			free(space);
			return (0);
		}
		av_byt = write(STDOUT_FILENO, space, num_byt);
		if (num_byt == -1)
		{
			free(space);
			return (0);
		}
		close(fd);
	}
	return(av_byt);
}

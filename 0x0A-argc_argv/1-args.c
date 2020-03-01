#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function to star.
 * @argc: counter.
 * @argv: values.
 * Return: integer value.
 */
int main(int argc, char *argv[])
{
	if (argc && argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);

}

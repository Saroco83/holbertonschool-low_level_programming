#include <stdio.h>
#include <stdlib.h>
/**
 * main - function ppal.
 * @argc: counter.
 * @argv: values, strings.
 * Return: integer value.
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc && argv)
	{
		for (count = 0; count < argc; count++)
		{
		printf("%s\n", *(argv + count));
		}
	}
	return (0);

}

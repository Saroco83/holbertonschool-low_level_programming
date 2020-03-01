#include <stdio.h>

/**
 * main - Funtion to call
 * @argc: couter of arrays
 * @argv: array pointer
 * Return: 0 on succes
 */
int main(int argc, char **argv)
{
	if (argc >= 0)
		printf("%s\n", argv[0]);

	return (0);
}

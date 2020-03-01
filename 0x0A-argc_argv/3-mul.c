#include <stdio.h>
#include <stdlib.h>
/**
 * main - function ppail
 * @argc: counter
 * @argv: values strings
 * Return: integer value
 */
int main(int argc, char *argv[])
{
	int mult = 0;

	if ((argc >= 3))
	{
		mult = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

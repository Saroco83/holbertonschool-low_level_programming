#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function ppal.
 * @argc: counter.
 * @argv: values, strings.
 * Return: integer value.
 */
int main(int argc, char *argv[])
{
	int i = 1, add = 0, j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}

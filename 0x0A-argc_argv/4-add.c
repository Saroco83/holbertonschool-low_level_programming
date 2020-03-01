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
	int i = 1, add = 0, j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (i < argc)
		{
			while (argv[i][j] != '\0')
			{
				if (!(argv[i][j] <= '9' && argv[i][j] >= '0'))
				{
					printf("ERROR\n");
					return (1);
				}
			j++;
			}
		i++;
		}
		add += atoi(*(argv + i));
		printf("%d\n", add);
	}
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Function ppal.
 * Return: 0 on succes
 * 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%iis positive\n", n);
	}
	if (n < 0)
	{	
		printf("%i is negative\n", n);
	}
	if (n == 0)
	{	
		printf("%i is zero\n", n);
	}
	return (0);
}

#include <stdio.h>
/**
 * main - function
 * Return: 0 on succes.
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if
		(a == 100)
		{
			printf("Buzz\n");
		}
		else if
		((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if
		(a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if
		(a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		printf("%d ", a);
	}
	return (0);
}

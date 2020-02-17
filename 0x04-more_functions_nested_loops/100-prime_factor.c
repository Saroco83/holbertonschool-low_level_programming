#include <stdio.h>
/**
 * main - fuction.
 * Return: o on succes.
 */
int main(void)
{
	long int a = 1231952;
	int b = 2;

	do
	{
		do
		{
			a = a / b;
		}while(a % b == 0);
		
		b++;
	}while(b < a);
	printf("%d\n", b);
	return(0);
}

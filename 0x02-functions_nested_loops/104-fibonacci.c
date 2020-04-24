#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long x = 1, y = 2, z, vil, leo, ale, mil, dry, dar;
	int i;

	printf("1, 2, ");
	for (i = 0; i < 90; i++)
	{
		z = x + y;
		printf("%lu, ", (unsigned long) z);
		x = y;
		y = z;
	}
	vil = x / 10000000000;
	leo = x % 10000000000;
	ale = y / 10000000000;
	mil = y % 10000000000;
	for (i = 90; i < 96; i++)
	{
		dry = vil + ale;
		dar = leo + mil;
		if (i == 91 || i == 92 || i == 94 || i == 95)
		{
			dar = dar - 10000000000;
			dry = dry + 1;
		}
		if (i != 95)
			printf("%lu%lu, ", (unsigned long) dry, (unsigned long) dar);
		else
			printf("%lu%lu\n", (unsigned long) dry, (unsigned long) dar);
		vil = ale;
		leo = mil;
		ale = dry;
		mil = dar;
	}

	return (0);
}

#include <stdio.h>
#include "calc.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
int main (int argc, char **argv)
{
	int c, p, num1, num2; 

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	p = ((get_op_func(argv[2]))(num1, num2));
	printf("%d", p);

}

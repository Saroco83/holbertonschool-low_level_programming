#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
/**
 *
 *
 *
 *
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	
	while ( i < 5)
	{
		if (ops[i].ops[0] == *s)
		{
			return(ops[s].ops[1])
		}


	}
}

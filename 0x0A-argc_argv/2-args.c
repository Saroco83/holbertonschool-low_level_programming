#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
int main(int argc, char* argv[])
{
	int count;

	if(argc && argv)
	{
		for (count = 0; count < argc; count++)
		{
		printf("%s\n", *(argv + count)) ;
		}
	}
	return(0);

}

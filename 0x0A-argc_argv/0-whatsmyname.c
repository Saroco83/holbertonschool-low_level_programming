#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
int main(int argc, char* argv[])
{
	if(argc && argv)
	{
		printf("%s\n", argv[argc - 1]);
	}
	return(0);

}

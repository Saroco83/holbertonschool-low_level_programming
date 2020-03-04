#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
int **alloc_grid(int width, int height)
{
  int **grid = NULL;
  
  grid = malloc(width * height * sizeof(int));
  if (grid == NULL)
  {
    return(NULL);
  }
    for (; **(grid +1) != '\0'; grid++)
    {
        **grid = 0;
    }
  return (grid);  
  }

#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function to creates and fill array
 * @s1: pointer to array source
 * @s2: pointer to array
 * Return: pointer to new array filled
 */
char *str_concat(char *s1, char *s2)
{
        char *concat = NULL;
        int fill2 = 0, len2 = 0, len1 = 0, fill, lenAdded = 0;

        if (s1 == NULL) 
        {
                s1 = "";
        }
        
        if (s2 == NULL)
        {
                s2 = "";
        }
        for (len1 = 0; s1[len1] != '\0'; len1++)
        {}
        for (len2 = 0; s2[len2] != '\0'; len2++)
        {}
        lenAdded = len1 + len2; 
        concat = malloc((lenAdded + 1) * sizeof(char));
        if (concat == NULL)
        {
                return (NULL);
        }
        for (fill = 0; fill < len1; fill++)
        {
                concat[fill] = s1[fill];
        }
        for (fill2 = 0; s2[fill2] != '\0'; fill2++)
        {
                concat[fill + fill2] = s2[fill2];
        }
        concat[fill + fill2] = '\0';
        return (concat);
}


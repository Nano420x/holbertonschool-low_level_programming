#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * betty
*/
char *create_array(unsigned int size, char c)
{
    char *tab;
    unsigned int i = 0;

    if (size == 0)
    {
        return (NULL);
    }

    tab = malloc(sizeof(char) * size);

    if (tab == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < size; i++)
    {
        tab[i] = c;
    }

    return tab;
}
#include "shell.h"

/**
 * main - uses getline and prints line
 * 
 * Return: 0
 */
int m_getline(char **av)
{
    int i;
    char *buff;
    size_t size;

    for (i = 1; av[i] != NULL; i++)
    {
        printf("$%s\n", av[i]);
    }
    return (0);

}

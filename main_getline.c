#include "shell.h"

/**
 * main - uses getline and prints line
 * 
 * Return: 0
 */
int main(__attribute__((unused))int ac, char **av)
{
    int i;
    
    for (i = 1; av[i] != NULL; i++)
    {
        printf("$%s\n", av[i]);
    }
    return (0);
}

#include <stdio.h>
#include <unistd.h>

/**
 * main - 
 * @av: char
 * Return: Always 0.
 */
int main(__attribute__((unused))int ac, char **av)
{
    int i;
    
    for (i = 1; av[i] != NULL; i++)
    {
        printf("%s\n", av[i]);
    }
    return (0);
}

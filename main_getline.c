#include "shell.h"

/**
 * Global
 */

input *c;

/**
 * main - uses getline and prints line
 * 
 * Return: 0
 */
int m_getline()
{
    int i = 0;
    char *buff;
    size_t size;
    const char *del = " \t\n";
    input *b = c;

    buff = malloc(sizeof(char *));
    if (buff == NULL)
    {
    free(buff);
    exit(1);
    }

    c = malloc(sizeof(input));
    if (c == NULL)
    {
    free(c);
    exit(1);
    }

    while (getline(&buff, &size, stdin) != -1)
    {
    if (i == 0)
    {
    c->command = strtok(buff, del);
    i++;
    }
    if (i > 0)
    {
    if (c->arg == NULL)
    {
    
    }
    else
    {
    if (c->arg->arg == NULL)
    {
    c->arg->arg = strtok(NULL, del);
    }
    else
    {
    c->arg->next->arg = strtok(NULL, del);
    }
    c->arg = b->arg->next;
    i++;
    }
    }
/**
 * Test
 */
test();
    }
    free(buff);
    return (0);
}

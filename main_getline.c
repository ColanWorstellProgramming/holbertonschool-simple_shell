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
    size_t i = 0;
    char *buff;
    size_t size;
    const char *del = " \t\n";
    s_args *b;

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

    b = malloc(sizeof(s_args));
    if (b == NULL)
    {
    free(b);
    exit(1);
    }

    c->arg = malloc(sizeof(s_args));
    if (c->arg == NULL)
    {
    free(c->arg);
    exit(1);
    }

    while (getline(&buff, &size, stdin) != -1)
    {
    while(i < size)
    {
    if (i == 0)
    {
    c->command = strtok(buff, del);
    }
    if (i > 0)
    {
    if (c->arg == NULL)
    {
    c->arg = b;
    }
    if (c->arg->arg == NULL)
    {
    b->arg = strtok(NULL, del);
    c->arg->next = b;
    }
    else
    {
    b = c->arg->next;
    while (b->arg != NULL)
    {
    b = c->arg->next;
    }
    b->arg = strtok(NULL, del);
    }
    
    c->arg->next = b;
    }
    i++;
    }
    free(b);
    b = NULL;
    freemem();
    free(buff);
    }
    return (0);
}

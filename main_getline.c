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
    
    c->arg = malloc(sizeof(s_args));
    if (c->arg == NULL)
    {
    free(c->arg);
    freemem();
    exit(1);
    }

    b = malloc(sizeof(s_args));
    if (b == NULL)
    {
    freemem();
    exit(1);
    }

    while (getline(&buff, &size, stdin) != -1)
    {
    while(i < size)
    {
    if (i == 0)
    {
    c->command = strtok(buff, del);
    printf("Command Stored\n");
    }
    if (i > 0)
    {
    printf("i > 0\n");
    if (c->arg == NULL)
    {
    printf("c->arg == NULL");
    }
    if (c->arg->arg == NULL)
    {
    printf("main_getline c->arg->arg == NULL\n");;
    b->arg = strtok(NULL, del);
    c->arg->next = b;
    }
    else
    {
    b = c->arg->next;
    printf("else\n");
    while (b->arg != NULL)
    {
    b = c->arg->next;
    printf("b arg != null\n");
    }
    printf("b arg was null\n");
    b->arg = strtok(NULL, del);
    }
    
    c->arg->next = b;
    printf("%s\n", b->arg);
    }
    i++;
    }
    free(c);
    freemem();
    }
    free(buff);
    return (0);
}

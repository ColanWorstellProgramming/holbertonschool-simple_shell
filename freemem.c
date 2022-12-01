#include "shell.h"

/**
 * Global
 */

input *c;

/**
 * freemem - free memory
 *
 * Return: void
 */
void freemem()
{
s_args *b;

b = malloc(sizeof(s_args));
if (b == NULL)
{
free(b);
exit(1);
}

    if (c)
    {
    if (c->arg)
    {
    while (c)
    {
    if (c->arg->next != NULL)
    {
    b = c->arg->next;
    free(c->arg);
    c->arg = b;
    }
    }
    }
    free(c);
    }
}

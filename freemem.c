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

    if (c)
    {
    while (c)
    {
    b = c->arg->next;
    free(c->arg);
    c->arg = b;
    }
    }

}

#include "shell.h"

/**
 * Global
 */

input *c;

/**
 * main - first function to be called
 * @ac: - arg count
 * @av: - args
 *
 * Return: int value
 */
int main(int ac, char *av[])
{

//m_getline();
_fork();
/**
 * Test Function
 */
//test();

(void) ac;
(void) av;
return (1);
}

/**
 * test -
 *
 * Return: void
 */
void test()
{

if(c == NULL)
{
printf("C == NULL\n");
free(c);
exit(1);
}
else
{
printf("Command: %s\n", c->command);
}

if (c->arg == NULL)
{
printf("Error Test Function Fail\n");
freemem();
exit(1);
}
else
{
if (c->arg->arg != NULL)
{
printf("%s\n", c->arg->arg);
}

while (c->arg->next->arg != NULL)
{
printf("%s\n", c->arg->next->arg);
}
}
freemem();
}

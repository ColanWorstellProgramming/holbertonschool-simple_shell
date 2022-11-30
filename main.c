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

m_getline();

/**
 * Test Function
 */
test();

(void) ac;
(void) av;

}

/**
 * test -
 *
 * Return: void
 */
void test()
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

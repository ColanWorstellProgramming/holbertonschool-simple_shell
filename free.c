#include "shell.h"

/**
 * freemem - free mem
 * @s: char **
 * Return: void
 */

void freemem(char **s)
{

	int i = 0;

	for (i = 0; s[i] != NULL; i++)
	{
		free(s[i]);
	}

}

#include "shell.h"

/**
 * loop2 - inf loop for shell
 * @s: path
 * Return: gline
 */
void loop2(int gline, char **s, char *buff, char *copy)
{

	if (gline == -1)
	{
		if (isatty(STDIN_FILENO))
		{
			_printf("\n");
		}
		freemem(s);
		free(buff);
		free(copy);
		free(s);
		exit(exit_status);
	}

}

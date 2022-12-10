#include "shell.h"

/**
 * _execve - execite fork
 * @s: path
 * @string: user input
 * Return: - pass or fail var
 */

int _execve(char *s, char **string)
{
	pid_t chipid;
	int x = 0;

	chipid = fork();

	if (chipid == -1)
	{
		perror("Fork Error'd While Initializin\n");
		x = 1;
	}

	if (chipid == 0)
	{
		execve(s, string, NULL);
		x = 1;
	}

	else
	{
		wait(NULL);
	}

	return(x);
}

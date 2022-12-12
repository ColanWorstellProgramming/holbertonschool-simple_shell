#include "shell.h"

extern char **environ;

/**
 * _execve - execite fork
 * @s: path
 * @string: user input
 * Return: - pass or fail var
 */

int _execve(char *s, char **string)
{
	pid_t chipid;
	int status;
	int x = 0;
	
	chipid = fork();

	if (chipid == -1)
	{
		perror("Fork Error'd While Initializin\n");
/*		x = 1;
*
*/
	}
	else if (chipid >  0)
	{
		wait(&status);
	}
	else if (chipid == 0)
	{
		if (s != NULL && string != NULL)
		{
			execve(s, string, environ);
/*			x = 1;
*
*/
		}
	}

	if (WIFEXITED(status))
	{
		x = WEXITSTATUS(status);
	}

	return(x);
}

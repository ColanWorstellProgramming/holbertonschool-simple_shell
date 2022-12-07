#include "shell.h"

/**
 * command - parses commands
 * @string: char
 * Return: void
 */

int command(char **string)
{

	char **s = NULL;
	int i;

	if (_strcmp(string[0], "exit") == 0)
	{
		fflush(stdout);
		return (1);
	}

	if (_strcmp(string[0], "env") == 0)
	{

	}

	else
	{

		s = spath();
		
		for (i = 0; s[i] != NULL; i++)
		{
			printf("I: %d | PATH |%s\ns[%d+1] = %s\n", i, s[i], i+1, s[i+1]);
		}
	}

	return (0);
}

/**
 * spath - tokenizes the path
 *
 * Return: char**
 */

char **spath()
{
	char **string = NULL;
	char *path = getpath();

	string = parse(path);

	return (string);
}

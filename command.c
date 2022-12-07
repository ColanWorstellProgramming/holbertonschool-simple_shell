#include "shell.h"

/**
 * command - parses commands
 * @string: char
 * Return: void
 */

int command(char **string)
{

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
	char *path = NULL;
	
	path = getpath();

	string = parse(path);

	return (string);
}

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

	if (1)
	{
		printf("%s\n", getpath());

	}

	return (0);
}

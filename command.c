#include "shell.h"

/**
 * command - parses commands
 * @string: char
 * Return: void
 */

void command(char **string)
{

	if (execve("", string, NULL) == -1)
	{
	perror("Error:");
	}

	if (_strcmp(string[0], "exit") == 0)
	{
	_exit(1);
	}

}

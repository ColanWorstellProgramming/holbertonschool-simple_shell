#include "shell.h"

/**
 * command - parses commands
 * @string: char
 * Return: void
 */

void command(char **string)
{

	if (_strcmp(string[0], "exit") == 0)
	{
	fflush(stdout);
	exit(1);
	}

	if (_strcmp(string[0], "env") == 0)
	{
	
	}

}

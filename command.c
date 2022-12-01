#include "shell.h"

/**
 * command - parses commands
 * @string:
 * Return: 
 */

void command(char **string)
{

	if (_strcmp(string[0], "exit") == 0)
	{
	exit(1);
	}

}

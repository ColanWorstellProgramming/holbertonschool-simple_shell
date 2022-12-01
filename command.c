#include "shell.h"

/**
 * command - parses commands
 * @string:
 * Return: 
 */

void command(char **string)
{

	char *ex = "exit";

	if (string[0] == ex)
	{
	printf("exit");
	exit(1);
	}

}

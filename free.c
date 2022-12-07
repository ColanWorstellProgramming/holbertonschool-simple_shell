#include "shell.h"

/**
 * command - parses commands
 * @string: char
 * Return: void
 */

void freemem(char **string)
{

	int x = 0;

	while (string[x] != NULL)
	{
		printf("String[%d]: %s\n", x, string[x]);
		x++;
	}
	while (x)
	{	
		x--;	
		printf("Free String[%d]: %s\n", x, string[x]);
		free(string[x]);
		string[x] = NULL;
	}

	free(string);
	string = NULL;

}

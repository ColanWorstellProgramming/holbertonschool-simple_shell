#include "shell.h"

/**
 * command - parses commands
 * @string: char
 * Return: void
 */

int command(char **string, char **s)
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
		printf("Location : %s\n", whichc(string, s));
/*		execve("path", "command+arguments", NULL);
*
*/
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

/**
 * whichc - finds where a command is
 * 
 * Return: where command is
 */

char *whichc(char **string, char **s)
{
	int i;
	char *r = NULL;
	char *comb = NULL;
	char *comb2 = NULL;

	for (i = 0; s[i] != NULL; i++)
	{

		comb = str_concat(s[i], "/");
		comb2 = str_concat(comb, string[0]);
		
		free(comb);
		comb = NULL;

		printf("Comb | %s\n", comb2);

		if (access(comb2, F_OK) == 0)
		{
			r = comb2;
			break;
		}
		else
		{
			printf("File Does Not Exist Within %s\n", s[i]);
		}

	}

	free(comb2);
	comb2 = NULL;

	if (r != NULL)
	{
		return (r);
	}

	printf("File Not Found");
	return (r);
}

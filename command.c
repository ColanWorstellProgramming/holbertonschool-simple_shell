#include "shell.h"

extern char **environ;

/**
 * command - parses commands
 * @string: user input
 * @s: path
 * @num: command sent count
 * Return: void
 */

int command(char **string, char **s, int num)
{
	int i = 0;
	int x = 0;
	char *r = NULL;

	if (_strcmp(string[0], "exit") == 0)
	{
		fflush(stdout);
		x = 1;
		return (x);
	}

	else if (_strcmp(string[0], "env") == 0)
	{

		for (i = 0; environ[i] != NULL; i++)
		{
			printf("%s\n", environ[i]);
		}

		x = 0;
		return (x);
	}

	else
	{
		r = whichc(string, s, num);

		if (r != NULL)
		{
		x = _execve(r, string);
		}
		free(r);
		r = NULL;
	}

	return (x);
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
 * @string: user input
 * @s: path
 * @num: command sent num
 * Return: where command is
 */

char *whichc(char **string, char **s, int num)
{
	int i = 0;
	char *r = NULL;
	char *comb = NULL;
	char *comb2 = NULL;
	int x = 0;

	while (_strchr(string[i], '/', x) == 1)
	{
		if (_strchr(string[i], '/', x + 1) == -1)
		{
			printf("%s: %d: %s: Permission denied\n", "./hsh", num, string[0]);
		}
		x++;
	}

	comb2 = _strdup(string[i]);

	for (i = 0; s[i] != NULL; i++)
	{

		if (comb2 == NULL)
		{
			comb = str_concat(s[i], "/");
			comb2 = str_concat(comb, string[0]);

			free(comb);
			comb = NULL;
		}

		if (access(comb2, F_OK) == 0)
		{
			r = _strdup(comb2);
			free(comb2);
			comb2 = NULL;
			break;
		}
		else
		{
			free(comb2);
			comb2 = NULL;
		}

	}


	if (r == NULL)
	{
		printf("%s: %d: %s: not found\n", "./hsh", num, string[0]);
		return (r);
	}

	return (r);
}

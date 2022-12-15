#include "shell.h"

/**
 * loop3 - inf loop for shell
 * @s: path
 * @gline: return val getline
 * @buff: string to be tokened
 * @string: char array for user input
 * @copy: copy of string
 * Return:
 */
void loop3(char **s, int gline, char *buff, char **string, char *copy)
{
	char *arg = NULL;
	const char *del = " \t\n";
	int amount = 1;
	char *two = NULL;
	int i = 0, j = 0;
	int num = 0;

	copy = _strdup(buff);
	for (arg = strtok(buff, del); arg != NULL; arg = strtok(NULL, del))
	{
		amount++;
	}
	if (gline != -1)
	{
		string = malloc(sizeof(char *) * (amount));
		if (string == NULL)
		{
			free(buff);
			exit(errno);
		}
		for (two = strtok(copy, del); two != NULL; two = strtok(NULL, del))
		{
			string[i] = two;
			i++;
		}
	}
	string[i] = NULL;
	loop2(gline, s, buff, copy);
	j = command(string, s, num);
	num++;
	free(buff);
	free(string);
	free(copy);
	if (j == 1)
	{
		freemem(s);
		free(s);
		s = NULL;
		exit(exit_status);
	}
}

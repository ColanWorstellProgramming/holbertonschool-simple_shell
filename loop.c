#include "shell.h"

/**
 * loop - inf loop for shell
 *
 * Return:
 */
void loop(void)
{
int i;
char *buff;
size_t size = 1;
const char *del = " \t\n";
char **string;
char *arg;

while (1)
{
	buff = malloc(sizeof(char *));
	if (buff == NULL)
	{
	free(buff);
	exit(1);
	}
	i = 0;
	printf("$ ");
	if (getline(&buff, &size, stdin) != -1)
	{
	string = malloc(sizeof(char *));
	if (string == NULL)
	{
	free(string);
	exit(1);
	}
	for (arg = strtok(buff, del); arg != NULL; arg = strtok(NULL, del))
	{
	string[i] = arg;
	command(string);
	i++;
	}
	}
}
}

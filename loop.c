#include "shell.h"

/**
 * loop - inf loop for shell
 *
 * Return:
 */
void loop(void)
{
int i;
int amount;
int gline;
int x;
char *buff;
char *two;
size_t size;
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
	amount = 1;
	gline = -1;
	size = 1;

	printf("$ ");
	
	gline = getline(&buff, &size, stdin);
	two = _strdup(buff);
	
	for (arg = strtok(buff, del); arg != NULL; arg = strtok(NULL, del))
	{
	amount++;
	}
	
	if (gline != -1)
	{
	string = malloc(sizeof(char *) * amount);
	if (string == NULL)
	{
	free(string);
	free(buff);
	exit(1);
	}
	for (two = strtok(buff, del); two != NULL; two = strtok(NULL, del))
	{
	string[i] = two;
	i++;
	}
	if (_strcmp(string[0], "exit") == 0)
	{
	free(buff);
	x = 0;
	while (string[x] != NULL)
	{
	free(string[x]);
	x++;
	}
	free(string);
	exit(1);
	}
	}
	free(buff);
	x = 0;
	while (string[x] != NULL)
	{
	free(string[x]);
	x++;
	}
	free(string);
}
}

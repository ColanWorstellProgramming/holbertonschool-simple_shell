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
char *buff;
char *two;
char *copy;
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
	copy = _strdup(buff);

	for (arg = strtok(buff, del); arg != NULL; arg = strtok(NULL, del))
	{
	amount++;
	arg = strtok(NULL, del);
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

	for (two = strtok(copy, del); two != NULL; two = strtok(NULL, del))
	{
	printf("i = %d\n", i);
	string[i] = two;
	i++;
	}
	printf("final i = %d\n", i);
	string[i] = NULL;

	if (_strcmp(string[0], "exit") == 0)
	{
	freemem(string);
	exit(1);
	}
	}
	freemem(string);
}
}

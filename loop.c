#include "shell.h"

/**
 * loop - inf loop for shell
 *
 * Return: 
 */
void loop()
{

int i;
char *buff;
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
	
	printf("$ ");
	
	if (getline(&buff, &size, stdin) != -1)
	{
	
	string = malloc(sizeof(char **));
	if (string == NULL)
	{
	free(string);
	exit(1);
	}

	for (arg = strtok(buff, del); arg != NULL; arg = strtok(NULL, del))
	{
	printf("%d: %s\n", i, arg);
	string[i] = arg;
	i++;
	}
	}
}

}

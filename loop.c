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
	size_t size;
	char *buff;
	char *two = NULL;
	char *copy = NULL;
	char **string;
	char *arg = NULL;

	const char *del = " \t\n";

	while (1)
	{
	
		printf("$ ");

		buff = NULL;
		
		size = 1;
		i = 0;
		amount = 1;
		gline = -1;

		gline = getline(&buff, &size, stdin);
		copy = _strdup(buff);

		printf("copy: %s\taddress: %p\n", copy, copy);
		printf("buff: %s\taddress: %p\n", buff, buff);
	
		if (_strcmp(buff, "\n") == 0)
		{
			continue;
		}
		for (arg = strtok(buff, del); arg != NULL; arg = strtok(NULL, del))
		{
			amount++;
		}

		if (gline != -1)
		{
			string = malloc(sizeof(char *) * (amount));
			if (string == NULL)
			{
				printf("String Malloc Fail\n");
				free(buff);
				exit(1);
			}

			for (two = strtok(copy, del); two != NULL; two = strtok(NULL, del))
			{
				printf("i = %d\n", i);
				string[i] = two;
				i++;
			}
			
			if (_strcmp(string[0], "exit") == 0)
			{
				free(buff);
				free(string);
				free(copy);
				exit(1);
			}
		}
		free(string);
		free(buff);
		free(copy);
	}
}

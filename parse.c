#include "shell.h"

/**
 * parse - the tokenizer
 *
 * Return: char **
 */
char **parse(char *s)
{
	int i;
	int amount = 1;
	char *two = NULL;
	char *copy = NULL;
	char **string = NULL;
	char *arg = NULL;

	const char *del = ":";
		
		i = 0;

		copy = _strdup(s);

		for (arg = strtok(copy, del); arg != NULL; arg = strtok(NULL, del))
		{
			amount++;
		}

			string = malloc(sizeof(char *) * (amount));
			if (string == NULL)
			{
				exit(1);
			}

			for (two = strtok(s, del); two != NULL; two = strtok(NULL, del))
			{
				string[i] = two;
				printf("string[%d]: %s\n", i, string[i]);
				i++;
			}
			
			two = NULL;
			free(copy);

		return (string);
}

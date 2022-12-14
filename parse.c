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
	char *copy2 = NULL;
	char **string = NULL;
	char *arg = NULL;

	const char *del = ":";

		i = 0;

		copy = _strdup(s);
		copy2 = _strdup(s);

		for (arg = strtok(copy, del); arg != NULL; arg = strtok(NULL, del))
		{
			amount++;
		}

			string = malloc(sizeof(char *) * (amount));
			if (string == NULL)
			{
				exit(errno);
			}

			for (two = strtok(copy2, del); two != NULL; two = strtok(NULL, del))
			{
				string[i] = two;
				i++;
			}

			two = NULL;
			free(copy);
			free(copy2);
			
		return (string);
}

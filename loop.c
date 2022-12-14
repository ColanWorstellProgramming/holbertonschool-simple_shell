#include "shell.h"

/**
 * loop - inf loop for shell
 *
 * Return:
 */
void loop(char **s)
{
	int flag;
	int x;
	int i;
	int amount;
	int gline;
	int j;
	size_t size;
	char *buff;
	char *two = NULL;
	char *copy = NULL;
	char **string = NULL;
	char *arg = NULL;

	const char *del = " \t\n";

	int num = 1;

	while (1)
	{

		if (isatty(STDIN_FILENO))
		{
			_printf("$ ");
		}

		arg = NULL;
		string = NULL;
		two = NULL;
		copy = NULL;
		buff = NULL;
		j = 0;
		size = 1;
		i = 0;
		x = 0;
		amount = 1;
		gline = -1;
		flag = 0;

		gline = getline(&buff, &size, stdin);

		if (gline == -1)
		{
			if (isatty(STDIN_FILENO))
			{
				_printf("\n");
			}
			freemem(s);
			free(buff);
			free(copy);
			free(s);
			exit(exit_status);
		}

		if (_strcmp(buff, "\n") == 0)
		{
			free(buff);
			buff = NULL;
			continue;
		}
		while (_strchr(buff, ' ', x) == 1)
		{
			if (_strchr(buff, ' ', x + 1) == -2)
			{
				flag = 1;
			}
			x++;
		}
		if (flag == 1)
		{
			free(buff);
			buff = NULL;
			free(copy);
			copy = NULL;
			continue;
		}

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

		if (gline == -1)
		{
			if (isatty(STDIN_FILENO))
			{
				_printf("\n");
			}
			freemem(s);
			free(buff);
			free(copy);
			free(s);
			exit(exit_status);
		}

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
}

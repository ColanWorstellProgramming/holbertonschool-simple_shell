#include "shell.h"

/**
 * loop - inf loop for shell
 * @s: path
 * Return:
 */
void loop(char **s)
{
	int flag;
	int x;
	int gline;
	size_t size;
	char *buff;
	char **string = NULL;
	char *copy = NULL;

	while (1)
	{

		if (isatty(STDIN_FILENO))
		{
			_printf("$ ");
		}

		string = NULL;
		buff = NULL;
		size = 1;
		x = 0;
		gline = -1;
		flag = 0;

		gline = getline(&buff, &size, stdin);

		loop2(gline, s, buff, copy);

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

		loop3(s, gline, buff, string, copy);

	}
}

#include "shell.h"

/**
 * main - first function to be called
 * @ac: - arg count
 * @av: - args
 *
 * Return: int value
 */
int main()
{
	char **s = NULL;
	int i = 0;
	s = spath();

	loop(s);

	for (i = 0; s[i] != NULL; i++)
	{
		free(s[i]);
	}

	return (exit_status);
}

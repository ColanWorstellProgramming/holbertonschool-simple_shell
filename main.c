#include "shell.h"

/**
 * main - first function to be called
 * @ac: - arg count
 * @av: - args
 *
 * Return: int value
 */
int main(int ac, char *av[])
{

	int i = 0;
	char **s = NULL;

	s = spath();
	
	for (i = 0; s[i] != NULL; i++)
	{
		printf("Paths | %s\n", s[i]);
	}
	
	loop(s);

	(void) ac;
	(void) av;
	return (1);
}

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

	char **s = NULL;

	s = spath();
	
	loop(s);

	(void) ac;
	(void) av;
	return (1);
}

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

	s = spath();

	loop(s);

	return (1);
}

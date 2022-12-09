#include "shell.h"
/**
 * main - 
 *
 * Return: -1
 */
int _execve(char *s, char **string)
{
	execve(s, string, NULL);

	printf("Error \n");
	return -1;
}

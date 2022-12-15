#include "shell.h"

/**
 * flagcheck - checks if exit
 * @buff: to free
 * @copy: to free
 * Return: returns check
 */
void flagcheck(char *buff, char *copy)
{
	free(buff);
	buff = NULL;
	free(copy);
	copy = NULL;
}

#include "shell.h"
/**
 * main - 
 *
 * Return:0
 */
int main (int ac, char *av[])
{
	char *argv[] = {"/bin/ls", "-1", NULL};
	int val = execve(arg[0], argv, NULL);
	if (val == -1)
		perror("Error");
	printf("Done with execve\n");
	return 0;
(void) ac;
(void) av;
}


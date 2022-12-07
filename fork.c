#include "shell.h"
/**
 *
 *
 *
 */

int _fork()
{
	int pid;
	pid = fork();

	if (pid > 0)
	{ 
	printf("im the parent process\n");
	}
	else{
		if (pid == 0)
	{
		{
		printf("im the child process\n");
		}
	}
		else
		{
		printf("Error\n");
		}
	}
}

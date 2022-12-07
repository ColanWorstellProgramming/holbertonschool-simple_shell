#include "shell.h"
/**
 *
 *
 *
 */

void _fork(void)
{
	int pid;
	pid = fork();
	printf("%d\n", pid);
		
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

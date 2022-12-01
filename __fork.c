#include "shell.h"
/**
 *
 *
 *
 */

int main()

{
	int pid;
	pid = fork();

	if (pid > 0)
	{ 
	printf("soy el proceso padre\n");
	}
	else{
		if (pid == 0)
	{
		{
		printf("soy el proceso hijo\n");
		}
		else
		{
		printf("Error\n");
		}
	}

}

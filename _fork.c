#include "shell.h"
#include <sys/types.h>
#include <sys/wait.h>
/**
 *
 *
 *
 */
int var =22;

int _fork(void)
{
	pid_t pidC;
	printf("**proc. PID = %d comienza **\n", getpid());
	pidC = fork();
	
	printf("proc. PID = %d , pidC = %d ejecutandose \n", getpid());
	
	if (pidC > 0)
	{
		var = 44;
	}
	else if (pidC == 0)
	{
		var = 33;
	}
	else /*error*/
	{
	}

	while (1)
	{
		sleep(2);
		printf("proc. PID = %d , var = %d ejecutandose \n", getpid(), var);
	}
	return 0;
}

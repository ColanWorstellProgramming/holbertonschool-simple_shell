#include "shell.h"
#include <sys/types.h>
#include <unistd.h>
int main()
{
	fork();
	printf ("hello Holberton School!\n PID = %d\n", getpid());
	return 0;
}

#include "shell.h"
/**
 * main - 
 *
 * Return: -1
 */
int main(int argc, char*, argv[])
{
	char *const argv2[] = {"prog2", "abcdef", "ghij", NULL};

	printf("%s : %i \n", argv[0], getpid());
	execve("./nameprogra", argv2);

	printf("Error \n");
	return -1;
}

#include "shell.h"
/**
 * main - 
 *
 * Return: -1
 */
int main(void) {
	char *argumentos [] = {"/bin/ls", "-l", NULL};
	execv("/bin/ls", argumentos);
	printf("Termino!!!");
	return EXIT_SUCCESS;
}

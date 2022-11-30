#ifndef _SHELL_H
#define _SHELL_H
#undef _SHELL_H

/**
 * Includes
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define PROMPT "$ "

/**
 * Prototypes
 */

int main(int ac, char *av[]);
char *_getline(FILE *fp);

#endif 

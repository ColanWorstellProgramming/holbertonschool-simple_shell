#ifndef _SHELL_H
#define _SHELL_H
#undef _SHELL_H

/**
 * Includes
 */

#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
#include <string.h>
#include <unistd.h>

#define PROMPT "$ "

=======
#include <unistd.h>
>>>>>>> 18261d74305ee7f793d46ad3d02f4de3304f2934
/**
 * Prototypes
 */

int main(int ac, char *av[]);
<<<<<<< HEAD
char *_getline(FILE *fp);
=======
int m_getline(char **av);
>>>>>>> 18261d74305ee7f793d46ad3d02f4de3304f2934

#endif 

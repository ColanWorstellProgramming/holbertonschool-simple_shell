#ifndef _SHELL_H
#define _SHELL_H
#undef _SHELL_H

/**
 * Includes
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 * Global var
 */

extern char **environ;

/**
 * Prototypes
 */

int main(int ac, char *av[]);
void loop(void);
void command(char **string);

int _strcmp(char *s1, char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strdup(char *str);
int _strlen(char *s);

int probandofork(void);
int _fork(void);

/**
 * error handle and Printer
 */

void print_error(char *line, int c, char **argv);

/**
 * Command parser and extractor
 */

int path_cmd(char **line);
int check_cmd(char **cmd, char *input, int c, char **argv);

#endif

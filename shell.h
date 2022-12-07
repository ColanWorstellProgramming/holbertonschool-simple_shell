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

void loop(void);
int command(char **string);

int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
int _strlen(char *s);
char *_strstr(char *haystack, char *needle);
char *getpath();

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


#ifndef h
#define h
#undef h

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
 * environ var
 * */

extern char **environ;

/**
 * Prototypes
 */

int main(int ac, char *av[]);
void loop();
int _fork();
int probandofork();
int check_cmd();
int _strcmp(char *s1, char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);

/**
 * error handle and Printer 
 **/
void print_error(char *line, int c, char **argv);

/** 
 * Command parser and extractor
 * */

int path_cmd(char **line);
int check_cmd(char **tokens, char *line, int count, char **argv);

#endif

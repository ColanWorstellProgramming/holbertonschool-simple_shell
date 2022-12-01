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
 * Struct
 */

typedef struct s_args
{
	char *arg;
	struct s_args *next;
} s_args;

typedef struct input
{
	char *command;
	s_args *arg;
} input;

/**
 * environ var
 * */

extern char **environ;

/**
 * Global
 */

extern input *c;

/**
 * Prototypes
 */

int main(int ac, char *av[]);
int m_getline();
int _fork();
void freemem();
int probandofork();
int check_cmd();
int _strcmp(char *s1, char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);


/**
 * Test Proto
 */
void test();



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

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

/**
 * Test Proto
 */
void test();

#endif

#include "shell.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stddef.h>

/**
 * _putchar - | putchar
 * @c: var
 * Return: var
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

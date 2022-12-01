#include "shell.h"

/**
 * _strcmp - | starts the file
 * @s1: - | var
 * @s2: - | var
 * Return: - | ends the file
 */

int _strcmp(char *s1, char *s2)
{

while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}

if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}

}

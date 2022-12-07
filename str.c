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

/**
 * _strdup - | starts the file
 * @str: - | var
 * Return: - |
 */

char *_strdup(char *str)
{
	char *y = NULL;
	int i;

	if (str == NULL)
		return (NULL);

	y = malloc(_strlen(str) + 1);
	if (y == NULL)
		return (NULL);
	for (i = 0; i < _strlen(str); i++)
	{
		y[i] = str[i];
	}

	y[i] = '\0';

	return (y);
}

/**
 * _strlen - | starts the file
 * @s: - | var
 * Return: - |
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}

	return (len);
}

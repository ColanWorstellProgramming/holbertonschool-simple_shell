#include "shell.h"

/**
 * str_concat - | starts the file
 * @s1: - | var
 * @s2: - | var
 * Return: - |
 */

char *str_concat(char *s1, char *s2)
{
	char *y;
	int i = 0;
	int x = 0;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}

	y = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (y == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < _strlen(s1); i++)
	{
		y[i] = s1[i];
	}
	for (x = 0; x <= _strlen(s2); x++)
	{
		y[i + x] = s2[x];
	}

	y[_strlen(s1) + _strlen(s2)] = '\0';

	return (y);
}

/**
 * _strchr - | starts the file
 * @s: - | string
 * @c: - | char
 * @i: index to be compared
 * Return: - | ends the file
 */

int _strchr(char *s, char c, int i)
{

	if (s[i] == c)
	{
		return (1);
	}
	if (s[i] == '\0')
	{
		return (-1);
	}
	return (-2);
}

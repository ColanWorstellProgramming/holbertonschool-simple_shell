#include "shell.h"

extern char **environ;

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

/**
 * getpath - | gets path string
 * 
 * Return: char *
 */

char *getpath()
{
	int i = 0;
	char *path = NULL;
	char *fpath = NULL;

	for (i = 0; environ[i] != NULL; i++)
	{

		path = _strstr(environ[i], "PATH=");

		if (path != NULL)
		{
			path = path + 5;
			fpath = path;
			break;
		}

	}

	return (fpath);

}

/**
 * _strstr - | starts the file
 * @haystack: - | var
 * @needle: - | var
 * Return: - | ends the file
 */

char *_strstr(char *haystack, char *needle)
{

	unsigned int x = 0;
	unsigned int y = 0;

	while (haystack[x])
	{

		while (needle[y] && haystack[x] == needle[0])
		{

		if (haystack[x + y] == needle[y])
		{
			y++;
		}
		else
		{
			break;
		}
		}
		if (needle[y])
		{
			x++;
			y = 0;
		}
		else
		{
			return (haystack + x);
		}
	}
return (0);
}

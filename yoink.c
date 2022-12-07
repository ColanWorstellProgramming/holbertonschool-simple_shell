#include "shell.h"

ssize_t yoinkline(char **line, FILE *inbound)
{
	static ssize_t inCount;
	char *buff;
	char c = 'a';
	int readRet;

	if (inCount == 0)
	{
		fflush(inbound);
	}
	else
	{
		return (-1);
	}
	inCount = 0;
	buff = malloc(sizeof(char) * 151);
	while (c != '\n')
	{
		readRet = read(STDIN_FILENO, &c, 1);
		if (readRet == EOF || (readRet == 0 && inCount == 0))
		{
			free(buff);
			return (-1);
		}
		else if (readRet == 0 && inCount > 0)
		{
			break;
		}
		buff[inCount] = c;
		inCount++;
	}
	if (inCount > 1)
		buff[inCount - 1] = '\0';
	*line = buff;
	if (readRet != 0)
	{
		inCount = 0;
	}
	return (inCount);
}

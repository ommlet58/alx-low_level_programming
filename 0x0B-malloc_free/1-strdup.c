#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup -allocated space in memory
* @str: the given char
* Return: 0
*/
char *_strdup(char *str)
{
	char *l;
	int i = 0;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
		l = malloc(sizeof(char) * (i + 1));
	}
	if (l == NULL)
		return (0);
	for (j = 0; str[j]; j++)
	{
		aaa[j] = str[j];
	}
	return (l);
}

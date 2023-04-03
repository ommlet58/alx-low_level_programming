#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string where to locat the caracter
 * @c: the caracter to locat
 * Return: a pointer to the first occurrence of the caracter
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
}

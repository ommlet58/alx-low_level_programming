#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string where to locat the caracter
 * @c: the caracter to locat
 * Return: a pointer to the first occurrence of the caracter
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return (NUlL);
}

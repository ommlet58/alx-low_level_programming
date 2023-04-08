#include "main.h"

/**
 * _strpbrk -searches a string for any of a set of bytes
 * @s: a pointer to the string to be searched
 * @accept: pointer to a string of characters to search for
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}

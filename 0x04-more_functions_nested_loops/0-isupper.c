#include "main.h"

/**
 * _isupper - checkes for uppercase character.
 * @c: the caracter to be checked.
 * Return: 1 if c is upper.
 * Rerurn: 0 otherwise.
 */
int _isupper(int c)
{
	int i, j;

	for (i = 'a'; i <= 'z' ; i++)
	{
		if (c == i)
			return (0);
	}
	for (j = 'A'; j <= 'A'; j++)
	{
		if (c == j)
			return (1);
	}
}

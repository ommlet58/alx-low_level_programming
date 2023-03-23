#include "main.h"

/**
 * _isdigit -checks for a degit.
 * @c: the number to be chrcked.
 * Return: 1 if c is degit, Return: 0 otherwise.
 */
int _isdigit(int c)
{
	if (c <= 9 && c >= 0)
	{
		return (1);
	}
	else
		return (0);
}

#include "main.h"

/**
 * _isupper - checkes for uppercase character.
 * @c: the caracter to be checked.
 * Return: 1 if c is upper.
 * Rerurn: 0 otherwise.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}

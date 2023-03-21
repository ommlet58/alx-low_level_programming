#include "main.h"

/**
 * _isalpha  - check the code.
 * @c: The character to be checked
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c <= 'Z' && c <= 'A' || c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}


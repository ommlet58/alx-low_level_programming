#include "main.h"

/**
 *  _islower  - check the code.
 * @c: The character to be checked
 * Return: Always 0.
 */
int _islower(int c)
{
	if ( c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}

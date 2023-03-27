#include "main.h"

/**
 * print_rev -print a string in revrse.
 *@s: string.
 */
void print_rev(char *s)
{
	while (*s)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}

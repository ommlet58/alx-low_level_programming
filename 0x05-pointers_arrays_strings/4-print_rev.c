#include "main.h"

/**
 * print_rev -print a string in revrse.
 *@s: string.
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
	}
	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}

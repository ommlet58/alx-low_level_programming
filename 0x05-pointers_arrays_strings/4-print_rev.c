#include "main.h"

/**
 * print_rev -print a string in revrse.
 *@s: string.
 */
void print_rev(char *s)
{
	int index;

	while (s[index] != '\0')
		index++;

	for (index -= 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}

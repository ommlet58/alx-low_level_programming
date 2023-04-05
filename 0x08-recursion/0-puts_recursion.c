#include "main.h"

/**
 * _puts_recursion -prints a string, followed by a new line
 * @s: the string to be printed
 * return 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 2);
	} else
		_putchar('\n');
}

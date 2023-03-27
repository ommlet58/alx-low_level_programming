#include "main.h"
#include <stdio.h>

/**
 * _puts -prints a string folowed by new line.
 *
 * @str: string.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}

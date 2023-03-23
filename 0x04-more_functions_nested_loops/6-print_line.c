#include "main.h"

/**
 * print_line -draw straight line in the terminal.
 * @n: number of _ should be printed.
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}


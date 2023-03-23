#include 'main.h'

/**
 * print_line -draw straight line in the terminal.
 * @n: number of _ should be printed.
 */
void print_line(int n)
{
	for (i = 1; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('$');
	_putchar('\n');
}


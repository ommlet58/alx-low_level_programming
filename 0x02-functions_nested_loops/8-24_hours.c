#include "main.h"

/**
 * jack_bauer - print evry minute of the day of jack bauer.
 *
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			if (a < 10)
				_putchar('0' + a);
			else
				_putchar(a);
			_putchar(':');
			if (b < 10)
				_putchar('0' + b);
			else
				_putchar(b);
			_putchar('\n');
		}
	}
}

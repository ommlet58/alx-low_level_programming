#include <stdio.h>
#include "main.h"

/**
 * print_binary - Print the binary
 * @n: The unsigned long int
 */
void print_binary(unsigned long int n)
{
	unsigned long int revnum;
	unsigned long int c;

	revnum = c = 0;
	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		revnum = revnum << 1;
		revnum += n & 1;
		c++;
		n = n >> 1;
	}
	while (revnum > 0)
	{
		_putchar((revnum & 1) + '0');
		revnum = revnum >> 1;
		c--;
	}
	if (c > 0)
	{
		while (c != 0)
		{
			_putchar('0');
			c--;
		}
	}
}

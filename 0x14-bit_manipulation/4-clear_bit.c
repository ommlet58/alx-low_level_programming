#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Set the value
 * @n: The unsigned long int
 * @index: The index
 * Return: 1 if it succeeds
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int r;
	unsigned long int nm;
	unsigned long int c;
	unsigned long int o;

	r = c = nm = 0;
	o = *n;
	if (index > 63)
		return (-1);
	while (c < 63)
	{
		r = r << 1;
		if (c == index)
			r += 0;
		else
			r += o & 1;
		c++;
		o = o >> 1;
	}
	while (c > 0)
	{
		nm = nm << 1;
		nm += r & 1;
		r = r >> 1;
		c--;
	}
	*n = nm;
	return (1);
}

#include "main.h"

/**
 * get_bit - the value of a bit
 * @n: The number
 * @index: The index of the bit
 *
 * Return: Value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int c;

	c = 0;
	if (index > 63)
		return (-1);
	while (n > 0)
	{
		if (c == index)
			return (n & 1);
		n = n >> 1;
		c++;
	}
	if (c < index)
		return (0);
	return (-1);
}

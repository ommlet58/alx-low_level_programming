#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Convert a string
 * unsigned int
 * @b: The string
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k, len;
	unsigned int decval;

	k = len = decval = 0;
	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		if (b[len] == '0' || b[len] == '1')
			len++;
		else
			return (0);
	}
	while (k < len)
	{
		decval = decval << 1;
		if (b[k] == '1')
			decval += 1;
		k++;
	}
	return (decval);
}

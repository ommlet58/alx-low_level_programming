#include "main.h"
#include <stdlib.h>

/**
 * create_array -creates an array of chars
 *
 * @size: the size of an array
 * @c: the char to assign
 * Return: Null
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	x = malloc(sizeof(char) * size);

	if (size == 0 || x == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		x[i] = c;
	return (x);
}

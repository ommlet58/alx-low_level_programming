#include "main.h"

/**
 * swap_int -swap the value of two integers.
 * @a: the first value.
 * @b: the second value.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

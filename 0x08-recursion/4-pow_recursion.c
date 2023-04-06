#include "main.h"

/**
 * _pow_recursion -gives the value of x raised to the power of y
 * @x: the number
 * @y: the number to get raised of
 * Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}

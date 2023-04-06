#include "main.h"

int _sqrt_helper(int n, int e);
/**
 * _sqrt_recursion -the natural square root of a number
 * @n: the number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
/**
 * _sqrt_helper - recursive helper function for _sqrt_recursion
 * @n: the number to find the square root of
 * @e: iterator
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int e)
{
	if (e * e > n)
		return (-1);
	if (e * e == n)
		return (e);
	return (_sqrt_helper(n, e + 1));
}

#include "main.h"

int prime_helper(int n, int i);
/**
 * is_prime_number -the input integer is a prime number
 * @n: the integer to check
 * Return: 1 if the input is a prim number otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, n - 1));
}

/**
 * prime_helper -check if the number id prim
 * @n: tested number
 * @i: iterator
 * Return: 1 if n is a prime number otherwise 0
 */
int prime_helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_helper(n, i - 1));
}


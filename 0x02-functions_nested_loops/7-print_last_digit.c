#include "main.h"

/**
 * print_last_digit - prints the last degit of a number.
 *
 * @n: the number to be checked
 * Return: the value of the last degit.
 */

int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
		digit *= -1;

	_putchar(digit + '0');

	return (digit);
}


#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	char b;

	a = 'A';
	b = tolower(a);
	putchar(b);
	return (0);
}

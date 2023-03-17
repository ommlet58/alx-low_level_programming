#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a[] = "abcdefjhigqlmnopkrstuvwxyz";

	for (int i = 0; i < 26 ; i++)
	{
		putchar(tolower(a[i]));
	}
	return (0);
}

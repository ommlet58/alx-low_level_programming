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

	a = 'a';
	for (a ; a <= 'z' ; a++)
	{
		putchar(tolower(a));
	}
	return (0);
}

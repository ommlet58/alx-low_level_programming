#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26 ; i++)
	{
		putchar(tolower(a[i]));
	}
	for (i = 0; i < 26 ; i++)
	{
		putchar(toupper(a[i]));
	}
	putchar('\n');
	return (0);
}

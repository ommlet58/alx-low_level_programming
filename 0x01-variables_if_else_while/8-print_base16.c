#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num <= 10; num++)
	{
		if (num < 10)
		{
			putchar((num % 10) + '0');
		} else
		{
			for (letter = 'a' ; letter <= 'f'; letter++)
			{
				putchar(letter);
			}
		}
	}
	putchar('\n');
	return (0);
}


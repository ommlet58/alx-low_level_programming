#include "main.h"

/**
 * print_alphabet_x10 - print 10 time alphabets.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; a <= 'z'; a++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

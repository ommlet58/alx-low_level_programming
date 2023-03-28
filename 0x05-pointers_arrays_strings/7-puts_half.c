#include "main.h"

/**
 * puts_half -print half of a string.
 * @str: the string.
 */
void puts_half(char *str)
{
	int a = 0;
	int i;

	while (str[a] != '\n')
	{
		a++;
	}

	if (a % 2 == 0)
		a = a / 2;
	else
		a = (a - 1) / 2;

	for (i = 0; i < a; i++)
	{
		_putchar(str[i]);
	}
	putchar('\n');
}

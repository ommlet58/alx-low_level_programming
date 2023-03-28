#include "main.h"

/**
 * puts_half -print half of a string.
 * @str: the string.
 */
void puts_half(char *str)
{
	int a = 0;
	int i, p;

	while (str[a] != '\0')
	{
		a++;
	}

	if (a % 2 == 0)
		p = a / 2;
	else
		p = (a - 1) / 2;

	for (i = 0; i < p; i++)
	{
		_putchar(str[i]);
	}
	putchar('\n');
}

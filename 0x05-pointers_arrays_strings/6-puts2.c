#include "main.h"

/**
 * puts2 -prints every other character of a string.
 * @str: string.
 */
void puts2(char *str)
{
	int a = 1;

	while (str[a - 1] != '\0')
	{
		if (a % 2 != 0)
		{
			_putchar(str[a - 1]);
		}
		a++;
	}
	_putchar('\n');
}


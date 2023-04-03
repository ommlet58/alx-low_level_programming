#include "main.h"

/**
 * _memcpy -copies memory area
 * @dest:memory to wherecopie
 * @src:the variable to copie from
 * @n:number of bytes
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	char *destin = dest;
	char *s = src;

	for (i = 0; i < n; i++)
	{
		destin[i] = s[i];
	}
	return (dest);
}

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
	int i = 0;

	for (; i < n; i++)
	{
		dest = src[i];
	}
	return (dest);
}

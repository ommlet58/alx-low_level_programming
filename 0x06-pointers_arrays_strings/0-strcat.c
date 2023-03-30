#include "main.h"

/**
 * _strcat -concatenates two strings.
 * @dest: first string.
 * @src: secend string.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	*dest = *dest + " " + *src;
	return (*dest);
}

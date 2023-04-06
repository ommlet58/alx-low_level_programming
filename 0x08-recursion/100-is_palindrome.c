#include "main.h"

int poli_helper(char *s, int i, int len);
int _strlen(char *s);

/**
 * is_palindrome -is the string polindrom
 * @s: string to test
 * Return: 1 if polndrom,0if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (poli_helper(s, 0, _strlen(s)));
}

/**
 * _strlen -gets the lenght of the string
 * @s: string to find the lenght of
 * Return: the length of n
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * poli_helper -check the characters
 * @s: string to check
 * @i:iterator
 * @len: lenght
 * Return: 1 if polindrom else 0
 */
int poli_helper(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (poli_helper(s, i + 1, len - 1));
}

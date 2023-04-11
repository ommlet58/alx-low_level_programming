#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * find_char -check if there is symbols
 * @arry: array to be ckecked
 * Return: 0 if there a symbol otherwise return 1
 */
int find_char(char *arry)
{
	unsigned int p = 0;

	while (p < strlen(arry))
	{
		if (!isdigit(arry[p]))
		{
			return (0);
		}
		p++;
	}
	return (1);
}

/**
 * main -add two arguments
 * @argc: number of argments
 * @argv: array of argemnts
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	for (; i < argc; i++)
	{
		if (find_char(argv[i]))
		{
			sum += atoi(argv[i]);
		} else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

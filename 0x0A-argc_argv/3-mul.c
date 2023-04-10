#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -mutiplies two numbers
 * @argc: number of parametrs
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int m = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			m = m * atoi(argv[i]);
		}
		printf("%d\n", m);
	} else
		printf("Error\n");
	return (0);
}

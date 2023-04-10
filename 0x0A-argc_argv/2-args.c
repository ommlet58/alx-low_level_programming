#include "main.h"
#include <stdio.h>

/**
 * main -prints all the argument the program received
 * @argc: number of a argument
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}

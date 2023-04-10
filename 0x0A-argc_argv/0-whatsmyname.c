#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main -prints the programs name
 * @argc: number of command line
 * @argv: array of command line
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);
	printf("\n");
	return (0);
}

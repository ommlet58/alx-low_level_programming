#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main -prints number of arguments passed to a programs
 * @argc: number of command line
 * @argv: array of command line
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}

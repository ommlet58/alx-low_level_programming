#include "main.h"
#include <stdio.h>

/*
 * main -prints number of atrguments
 * @argc: the number of arguments
 * @argv: array of arguments
 * Retrun: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}

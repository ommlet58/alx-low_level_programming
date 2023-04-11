#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -printd the minimum number of coins to make an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if there is arguments and 0 if the numbers is 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int money;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}
	while (money > 0)
	{
		if (money >= 25)
		{
			money -= 25;
			i++;
		} else if (money >= 10)
		{
			money -= 10;
			i++;
		} else if (money >= 5)
		{
			money -= 5;
			i++;
		} else if (money >= 2)
		{
			money -= 2;
			i++;
		} else if (money >= 1)
		{
			money -= 1;
			i++;
		}
	}
	printf("%d\n", i);
	return (0);
}

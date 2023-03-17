#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;
	printf("Last digit of %d is %d", n, p);
	if (n > 5)
	{
		printf("and is greater than 5\n");
	} else if (n == 0)
	{
		printf("and is 0\n");
	} else
	{
		printf("and is less than 6 nad not 0\n");
	};
	return (0);
}

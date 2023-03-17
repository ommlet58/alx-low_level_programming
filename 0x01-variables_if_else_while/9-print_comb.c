#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 1 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			putchar(num1);
			putchar(num2);
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
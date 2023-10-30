#include "main.h"

/**
 * print_to_98 - prints natural numbers to 98
 * @n : natural number
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n <= 0 && n <= 98)
	{
		for (i = n; i <= 98; i++)
			printf("%d, ", i);
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
			printf("%d, ", i);
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
}

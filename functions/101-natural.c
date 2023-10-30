#include <stdio.h>

/**
 * main - prints multiples of 3 and 5
 * @i : argument
 * Return: sum
 */

int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n ",sum);
}

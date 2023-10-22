#include "main.h"

/**
 * print_rev - function to print string in reverse
 * @s: pointer
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int count = 0;
	int u;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (u = count - 1; s[u] != '\0'; u--)
		_putchar(s[u]);
	_putchar('\n');
}

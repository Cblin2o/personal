#include "main.h"

/**
 * swap_int - swaps two integer
 * @a : first parameter
 * @b : second parameter
 * Return : void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

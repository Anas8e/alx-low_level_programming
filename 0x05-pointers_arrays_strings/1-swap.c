#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: Pointer of a
 * @b: Pointer of b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}


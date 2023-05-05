#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 *
 * @n: Number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int started = 0;

	while (mask != 0) /* Loop through all bits */
	{
		if ((n & mask) == mask) /* Print bit if it's a 1 */
		{
			_putchar('1');
			started = 1;
		}
		else if (started) /* If we already started, print 0's */
		{
			_putchar('0');
		}

		mask >>= 1; /* Shift mask one position */
	}

	if (!started) /* If no 1's were found, print a single 0 */
	{
		_putchar('0');
	}
}


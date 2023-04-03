#include "main.h"
/**
 *  _memset- fills memory with a constant byte.
 *  @s: Pinter
 *  @b: constant byte
 *  @n: number of bytes of the memory
 *  Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	int i;
	for (i = 0; i < n; i++)
	{
		*p++ = b;
	}
	return (s);
}


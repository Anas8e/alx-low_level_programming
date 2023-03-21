#include <stdio.h>

/**
  * print_alphabet - prints alphabets in lowercase
  *
  * Retrun: void
  */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar (i);
	}
	putchar ('\n');
}

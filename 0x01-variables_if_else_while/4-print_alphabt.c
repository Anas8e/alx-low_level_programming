#include <stdio.h>

/**
 * main - prints tha alphabet in lowercase
 *
 * Return: 0
*/
	int main(void)

	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			if (i != ('q' || 'e'))
			{
				putchar(i);
			}
		}
		putchar('\n');
		return (0);
}

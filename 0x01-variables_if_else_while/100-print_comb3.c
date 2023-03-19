#include <stdio.h>
/**
 * main - prints all possible combination of single-digit numbers.
 *
 * Return: 0
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <= 9; j++)	
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if (i == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

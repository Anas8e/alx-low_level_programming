#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - the main function of the program
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive",n);
	}
	else if (n < 0)
	{
		printf("%d is negative",n);
	}
	else
	{
		printf("is zero");
	}
	return (0);
}

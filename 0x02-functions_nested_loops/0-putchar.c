#include <stdio.h>

/**
  * main - the main entry of the program
  *
  * Return: Always 0 (secusess)
  */
int main(void)
{
	int i;
	char arr[8] = "_putchar";

	for (i = 0;i < 8; i++)
	{
		putchar (arr[i]);
	}
	putchar ('\n');
	return (0);
}

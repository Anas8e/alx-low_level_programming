#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything, depending on the format string
 * @format: a string of format specifiers for the variadic arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] && !j)
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(args);
}



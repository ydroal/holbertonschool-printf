#include "main.h"

/**
 * print_number - print integer
 *
 * @ap: list of variadic arguments
 * Return: length of string
 */

int print_number(va_list ap)
{
	unsigned int i;
	int n;

	n = va_arg(ap, int);
	if ( n < 0)
	{
		return (_putchar('-'));
		i = n * -1;
	}
	else
		i = n;

	if (i > 9)
	{
		print_number(i / 10);
		print_number(i % 10);
	}
	else if (i < 9)
		return (_putchar(n + '0'));    
}

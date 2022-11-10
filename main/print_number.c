#include "main.h"

/**
 * print_number - print integer
 *
 * @ap: list of variadic arguments
 * Return: length of string
 */

int print_number(va_list ap)
{
	int n;
	int len = 0;

	n = va_arg(ap, int);
	if ( n < 0)
	{
		len += _putchar('-');
		n *= -1;
	}
	while (n >= 0 && n <= 9)
	{
		len += _putchar((n / 10) + '0');
		len += _putchar((n % 10) + '0');
	}
	return (len);
}

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
	int div = 1;

	n = va_arg(ap, int);
	if (n < 0)
	{
		len += _putchar('-');
		n *= -1;
	}

	while ((n / div) > 9)
		div *= 10;

	while (div != 0)
	{
		len += _putchar((n / div) + '0');
		n %= div;
		div /= 10;
	}
	return (len);

}

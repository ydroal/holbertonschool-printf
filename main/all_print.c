#include "main.h"

/**
 * print_char - print char
 *
 * @ap: list of variadic arguments
 * Return: length of caracter printed
 */

int print_char(va_list ap)
{
	int c;

	c = va_arg(ap, int);
	write(1, &c, 1);
	return (1);
}

/**
 * print_string - print string
 *
 * @ap: list of variadic arguments
 * Return: length of string
 */

int print_string(va_list ap)
{
	char *str;
	int len;

	str = va_arg(ap, char*);
	len = _strlen(str);
	return (write(1, str, len));
}

/**
 * print_percent - print percent
 *
 * @ap: list of variadic arguments
 * Return: 1
 */

int print_percent(va_list ap)
{
	return (write(1, "%", 1));
	return (1);
}

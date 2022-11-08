#include "main.h"

int print_char(va_list ap)
{
	int c;
	c = va_arg(ap, int);
	write(1, &c, 1);
	return (1);
}

int print_string(va_list ap)
{
	char *str;
	int len;
	str = va_arg(ap, char*);
	len = _strlen(str);
	return (write(1, str, len));
}

int print_percent(va_list ap)
{
	return (write(1, "%", 1);
}

#include "main.h"

/**
 * _printf - recreate printf
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: the number of characters printed (excluding the null byte used
 * to end output to strings)
 */
int _printf(const char *format, ...)
{
	tab_type spe[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_number},
		{"i", print_number},
		{NULL, NULL}
	};
	va_list ap;
	int i = 0, j;
	int len = 0;

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			len += _putchar(format[i]);
		if (format[i] == '%')
		{
			for (j = 0; spe[j].c != NULL; j++)
			{
				if (*spe[j].c == format[i + 1])
				{
					len += spe[j].f(ap);
					i += 1;
					break;
				}
			}
			if (spe[j].c == NULL)
			{
				len += _putchar(format[i]);
			}
		}
	}
	va_end(ap);
	return (len);
}

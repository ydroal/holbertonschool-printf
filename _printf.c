#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
		{"c", print_char}, /** char *c , (*f) */
		{"s", print_string},
		{"%", print_percent},
	};
	va_list ap;
	int i = 0, j;
	int len = 0;

	va_start(ap, format);

	if (format == NULL || format[i] == '\0')
		return (-1);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			len += _putchar(format[i]);
		if (format[i] == '%')
		{
			for (j = 0; j < 2; j++)
			{
				if (*spe[j].c == format[i + 1])
				{
					len += spe[j].f(ap);
					i += 1;
					break;
				}
			}
		}
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			len += spe[2].f(ap);
		}
	}
	va_end(ap);
	return (len);
}

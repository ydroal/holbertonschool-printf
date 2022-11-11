#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	long int l, lm;

	len = _printf("Let's print a simple sentence.\n");
	len2 = printf("Let's print a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("%c\n", 'S');
	printf("%c\n", 'S');
	_printf("%s", "This sentence is retrieved from va_args!\n");
	printf("%s", "This sentence is retrieved from va_args!\n");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	_printf("Should print a single percent sign: %%\n");
	printf("Should print a single percent sign: %%\n");
	_printf("%K\n");
	printf("%K\n");

	l = INT_MAX;
	lm = INT_MIN;

	l += 1024;
	lm -= 1024;

	_printf("%d, %d, %d\n", 1024, -1024, 0);
	printf("%d, %d, %d\n", 1024, -1024, 0);
	_printf("%d, %d\n", INT_MAX, INT_MIN);
	printf("%d, %d\n", INT_MAX, INT_MIN);
	_printf("%d\n", l);
	printf("%d\n", l);
	_printf("There is %i bytes in %i KB\n", 1024, 1);
	printf("There is %i bytes in %i KB\n", 1024, 1);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	long int l = INT_MAX;
	long int lm = INT_MIN;

	l += 1024;
	lm -= 1024;

	/*main_0.c main_1.c main_2.c*/
	len = _printf("%d, %d, %d", 1024, -1024, 0);
	len2 = printf("%d, %d, %d", 1024, -1024, 0);
	/*main_3.c main_4.c*/
	/*len = _printf("%d, %d", INT_MAX, INT_MIN);
	len2 = printf("%d, %d", INT_MAX, INT_MIN);*/
	/*main_5.c*/
	/*len = _printf("%d", l);
	len2 = printf("%d", l);*/
	/*main_6.c*/
	/*len = _printf("%d", lm);
	len2 = printf("%d", lm);*/
	/*main_7.c*/
	/*len = _printf("There is %d bytes in %d KB\n", 1024, 1);
	len2 = printf("There is %d bytes in %d KB\n", 1024, 1);*/
	/*main_8.c*/
	/*len = _printf("%d - %d = %d\n", 1024, 2048, -1024);
	len2 = printf("%d - %d = %d\n", 1024, 2048, -1024);*/
	/*main_9.c*/
	/*len = _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	len2 = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));*/
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}

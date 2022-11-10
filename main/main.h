#ifndef _PRINTF_H_
#define _PRINTF_H_
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print_type -  list of types of arguments
 *
 * @c: conversion specifiers
 * @f: function's pointer
 *
 */

typedef struct print_type
{
	char *c;
	int (*f)(va_list ap);
} tab_type;

int _printf(const char *format, ...);
int _strlen(char *);
int _putchar(char c);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);
int print_number(va_list ap);

#endif

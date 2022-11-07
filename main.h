#ifndef _PRINTF_H_
#define _PRINTF_H_

int _printf(const char *format, ...);

typedef struct print_type
{
	char *c;
	void (*f)(va_list ap; int len);
} tab_type;

#endif

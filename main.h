#ifndef _PRINTF_H_
#define _PRINTF_H_
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
 * struct form -  list of types of arguments
 * @c: char
 * @f: function's pointer
 * Description: Longer description
 */
typedef struct print_type
{
	char *c;
	void (*f)(va_list ap; int len);
} tab_type;

#endif

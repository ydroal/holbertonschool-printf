# Holberton School Printf

This repository stores my printf projects I did at the Holberton school. 

## Requirements
All files were compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

## Projects
* [holbertonschool-printf](https://github.com/ydroal/holbertonschool-printf) 

## Tasks
0-Write a function that produces output according to a format.

* Prototype: int _printf(const char *format, ...);
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
* format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
	* c
	* s
	* %
* You don’t have to reproduce the buffer handling of the C library printf function
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers


1-Handle the following conversion specifiers:

* d
* i
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

2-Create a man page for your function.

File: man_3_printf

## Repo
* GitHub repository: holbertonschool-printf
* 

example
root@cdb6cce18616:/holbertonschool-printf/main# cat 0-test.c
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
root@cdb6cce18616:/holbertonschool-printf# gcc -Wall -Wextra -Werror -pedantic -std=gnu89
-Wno-format *.c -o a
root@cdb6cce18616:/holbertonschool-printf# ./a
Let's print a simple sentence.
Let's print a simple sentence.
Length:[31, 31]
Length:[31, 31]
S
S
This sentence is retrieved from va_args!
This sentence is retrieved from va_args!
Complete the sentence: You know nothing, Jon Snow.
Complete the sentence: You know nothing, Jon Snow.
Should print a single percent sign: %
Should print a single percent sign: %
%K
%K
1024, -1024, 0
1024, -1024, 0
2147483647, -2147483648
2147483647, -2147483648
-2147482625
-2147482625
There is 1024 bytes in 1 KB
There is 1024 bytes in 1 KB

# Project - C - printf

Re-create of the printf function.
This is a group project.

## Requirements
* All files were compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* This code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

## GitHub
There should be one project repository per group.

## Compilation
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

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

## Example
![Exemple](https://user-images.githubusercontent.com/113631115/201341681-adcdcd49-0242-46a6-a552-55002da285b5.png)

## Flowchart
[Fowchart.pdf](https://github.com/ydroal/holbertonschool-printf/files/9991530/Fowchart.pdf)

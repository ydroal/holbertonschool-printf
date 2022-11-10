#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	/*char *str = "When you invoke GCC. The \"overall options\" allow  .\n\nOther options are passed on to one \n\nMost of the language languages.\n\nThe gcc -d -v.\n\nYou can gnificant.\n\nMany options -Wformat and so on is not the default.\n";*/

	len = _printf("Let's print a simple sentence.\n");
	len2 = printf("Let's print a simple sentence.\n");
	
	len = _printf("%c\n", 'S');
	len2 = printf("%c\n", 'S');
	
	len = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
	len2 = printf("A char inside a sentence: %c. Did it work?\n", 'F');
	
	len = _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	len2 = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	
	len = _printf("%s", "This sentence is retrieved from va_args!\n");
	len2 = printf("%s", "This sentence is retrieved from va_args!\n");
	
	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	
	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	
	len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	len2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	
	len = _printf("%%\n");
	len2 = printf("%%\n");

	len = _printf("Should print a single percent sign: %%\n");
	len2 = printf("Should print a single percent sign: %%\n");
	
	len = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	len2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	
	len = _printf("css%ccs%scscscs", 'T', "Test");
	len2 = printf("css%ccs%scscscs", 'T', "Test");
	
	/*len = _printf(str);
	len2 = printf(str);

	len = _printf("man gcc:\n%s", str);
	len2 = printf("man gcc:\n%s", str);*/

	len = _printf("%c\n", '\0');
	len2 = printf("%c\n", '\0');

	len = _printf(NULL);
	len2 = printf(NULL);
	
	len = _printf("%");
	len2 = printf("%");

	len = _printf("%!\n");
	len2 = printf("%!\n");
	
	len = _printf("%K\n");
	len2 = printf("%K\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}

Man_3_printf.
Functions we use.
int _putchar(char c); /*writes the character c to stdout */
int _printf(const char *format, ...);/* function that produces output according to a format.*/
int print_char(va_list c);/*writes the character c to stdout */
int print_string(va_list s);/*writes the character c to stdout */
int print_int(va_list i);/*function that prints an integer */
int print_dec(va_list d);/* function that prints an decimal*/
How to use.
Complilation
All of the .c files along with a main.c file are to be compiled with gcc 4.8.4 on Ubuntu 14.04 LTS with the flags -Wall Werror -Westra and -pedantic.

The files will be compiled this way:

gcc -Wall -Werror -Wextra -pedantic *.c
Use.
In the main.c file, use the _printf function like so:

#include "main.h"
/**
 * main - main function of program
 * Return: always 0
 */
int main(void)
{
	int num;
	char *string;
	
	num = 100;
	string = "Hello, ALX!"
	_printf("%s is %i.\n", string, num);
	return (0);
}
linux>$  gcc -Wall -Werror -Wextra -pedantic *.c -o print_program
linux>$  ./print_program
Hello, ALX is 100.
linux>$
Contributors
Yakob Solomon
Mubarek Hussen


#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_c - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1.
 */
int print_c(va_list c)
{
	unsigned char my_char;

	my_char = va_arg(c, int);
	_putchar(my_char);
	return (1);
}
/**
 * print_porcentage - %
 *
 * Return: 1.
 */
int print_porcentage(void)
{
	_putchar('%');
	return (1);
}

#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_s - Function that prints a string of characters
 * @s the string to be printed
 *
 * Return: returns the number of character printed
 */

int print_s(va_list s)
{
	char *str;
	int i = 0;

	str = va_arg(s, char *);

	if (str == NULL)
		str = "(nill)";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

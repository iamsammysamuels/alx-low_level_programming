#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * checker - Function to check the actual specifier
 * and returns a function pointer.
 * @format: the specifier to compare
 * Return: a function pointer
 */

int (*checker(const char *format))(va_list)
{
	int i;
	print p[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
			break;
	}
	return (p[i].rep);
}

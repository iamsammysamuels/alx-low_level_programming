#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that print numbers followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * @...: Other parameters
 * Return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list val;
	unsigned int i = 0;
	int nums;

	va_start(val, n);
	for (; i < n; i++)
	{
		nums = va_arg(val, int);
		printf("%d", nums);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(val);
}
